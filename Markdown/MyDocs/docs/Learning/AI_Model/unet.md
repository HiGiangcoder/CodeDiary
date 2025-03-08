# Giải thích về kiến trúc UNet và cách cài đặt.

## Phần I: Giới thiệu

### 1. UNet là gì?
UNet là một mô hình deep learning thuộc kiến trúc CNN (Convolution Neural Network), được thiết kế đặc biệt cho các tác vụ phân đoạn ảnh (image segmentation).

![Minh họa mô hình unet](unet/unet_image_segmentation.png)

**Hình 1:** Minh họa về mô hình UNet và ví dụ về image segmentation.

### 2. Kiến trúc của UNet
Kiến trúc UNet có hình dáng giống chữ "U", gồm 2 phần chính:

#### 2.1. Encoder (Contraction Path)
- Gồm các **convolution layer** và **pooling layer** để giảm kích thước không gian của ảnh và tăng số lượng đặc trưng (feature maps).

- Giúp trích xuất các đặc trưng quan trọng.

#### 2.2. Decoder (Expansion Path)
- Sử dụng các lớp **upsampling (deconvolution)** để khôi phục kích thước ban đầu của ảnh.

- Kết hợp với các đặc trưng từ Encoder (**skip connections**) giúp tái tạo chi tiết tốt hơn.

![alt text](unet/unet_architecture.png)

**Hình 2:** Cấu trúc kiến trúc UNet.

### 3. Đặc điểm nổi bật
- **Skip connections:** Giúp giữ lại thông tin chi tiết từ các lớp ban đầu và cải thiện kết quả phân đoạn.
  
- **Không yêu cầu quá nhiều dữ liệu:** Do kiến trúc đối xứng và cách tận dụng dữ liệu hiệu quả.
  
- **Ứng dụng trong phân đoạn ảnh y khoa:** Được thiết kế ban đầu cho lĩnh vực y tế, như phân đoạn tế bào, mô bệnh, não MRI, v.v.

### 4. Ứng dụng của UNet
- **Y tế:** Phân đoạn hình ảnh y khoa như X-ray, MRI, CT Scan.
  
- **Viễn thám:** Phân tích ảnh vệ tinh, bản đồ địa lý.
- **Nghệ thuật và xử lý ảnh:** Tạo bản đồ sâu (depth maps), tách nền.

UNet vẫn là một trong những kiến trúc m ạnh mẽ nhất cho phân đoạn ảnh và có nhiều biến thể như **UNet++**, **Attention UNet**, **3D UNet**,... để cải thiện hiệu suất.

---

## Phần II: Mô tả chi tiết
### 1. Ví dụ về mô hình UNet:
Dưới đây là một đoạn code cơ bản sử dụng kiến trúc UNet trong PyTorch. UNet là một kiến trúc mạng nơ-ron phổ biến trong các bài toán phân đoạn ảnh (image segmentation).

```python
import torch
import torch.nn as nn
import torch.nn.functional as F

class UNet(nn.Module):
    def __init__(self, in_channels, out_channels):
        super(UNet, self).__init__()
        
        # Encoder
        self.encoder1 = self.conv_block(in_channels, 64)
        self.encoder2 = self.conv_block(64, 128)
        self.encoder3 = self.conv_block(128, 256)
        self.encoder4 = self.conv_block(256, 512)
        
        # Bottleneck
        self.bottleneck = self.conv_block(512, 1024)
        
        # Decoder
        self.upconv4 = self.upconv_block(1024, 512)
        self.decoder4 = self.conv_block(1024, 512)
        self.upconv3 = self.upconv_block(512, 256)
        self.decoder3 = self.conv_block(512, 256)
        self.upconv2 = self.upconv_block(256, 128)
        self.decoder2 = self.conv_block(256, 128)
        self.upconv1 = self.upconv_block(128, 64)
        self.decoder1 = self.conv_block(128, 64)
        
        # Final layer
        self.final_conv = nn.Conv2d(64, out_channels, kernel_size=1)
        
    def conv_block(self, in_channels, out_channels):
        return nn.Sequential(
            nn.Conv2d(in_channels, out_channels, kernel_size=3, padding=1),
            nn.BatchNorm2d(out_channels),
            nn.ReLU(inplace=True),
            nn.Conv2d(out_channels, out_channels, kernel_size=3, padding=1),
            nn.BatchNorm2d(out_channels),
            nn.ReLU(inplace=True)
        )
    
    def upconv_block(self, in_channels, out_channels):
        return nn.ConvTranspose2d(in_channels, out_channels, kernel_size=2, stride=2)
    
    def crop_tensor(self, tensor, target_size):
        _, _, H, W = tensor.size()
        diffY = (H - target_size[0]) // 2
        diffX = (W - target_size[1]) // 2
        return tensor[:, :, diffY:(diffY + target_size[0]), diffX:(diffX + target_size[1])]
    
    def forward(self, x):
        # Encoder
        enc1 = self.encoder1(x)
        enc2 = self.encoder2(F.max_pool2d(enc1, 2))
        enc3 = self.encoder3(F.max_pool2d(enc2, 2))
        enc4 = self.encoder4(F.max_pool2d(enc3, 2))
        
        # Bottleneck
        bottleneck = self.bottleneck(F.max_pool2d(enc4, 2))
        
        # Decoder
        dec4 = self.upconv4(bottleneck)
        enc4 = self.crop_tensor(enc4, dec4.shape[2:])
        dec4 = torch.cat((dec4, enc4), dim=1)
        dec4 = self.decoder4(dec4)
        
        dec3 = self.upconv3(dec4)
        enc3 = self.crop_tensor(enc3, dec3.shape[2:])
        dec3 = torch.cat((dec3, enc3), dim=1)
        dec3 = self.decoder3(dec3)
        
        dec2 = self.upconv2(dec3)
        enc2 = self.crop_tensor(enc2, dec2.shape[2:])
        dec2 = torch.cat((dec2, enc2), dim=1)
        dec2 = self.decoder2(dec2)
        
        dec1 = self.upconv1(dec2)
        enc1 = self.crop_tensor(enc1, dec1.shape[2:])
        dec1 = torch.cat((dec1, enc1), dim=1)
        dec1 = self.decoder1(dec1)
        
        # Final layer
        out = self.final_conv(dec1)
        
        return out

# Kiểm tra xem GPU có sẵn không
device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
print(f"Using device: {device}")

# Tạo mô hình và di chuyển sang GPU
model = UNet(in_channels=1, out_channels=1).to(device)

# Tạo dữ liệu đầu vào và di chuyển sang GPU
x = torch.randn((1, 1, 572, 572)).to(device)

# Chạy mô hình
output = model(x)
print(output.shape)  # Kích thước đầu ra: (1, 1, 388, 388)
```

#### Giải thích sơ qua:
- **Encoder**: Phần encoder bao gồm các khối convolution (`conv_block`) và max pooling để giảm kích thước không gian của ảnh và tăng số lượng kênh (channels).
- **Bottleneck**: Đây là phần nằm giữa encoder và decoder, thường là một khối convolution với số lượng kênh lớn nhất.
- **Decoder**: Phần decoder sử dụng các khối up-convolution (`upconv_block`) để tăng kích thước không gian của ảnh và giảm số lượng kênh. Các kết nối skip (skip connections) được sử dụng để kết hợp thông tin từ encoder tương ứng.
- **Final layer**: Lớp convolution cuối cùng để ánh xạ số lượng kênh đầu ra thành số lớp cần phân đoạn.

#### Lưu ý:
- Kích thước đầu vào và đầu ra của UNet phụ thuộc vào kích thước của ảnh đầu vào và số lượng lớp cần phân đoạn.
- Bạn có thể điều chỉnh số lượng kênh, số lượng lớp, và các tham số khác để phù hợp với bài toán cụ thể của mình.


### 2. Bản vẽ tay giải thích về UNet và các layer.
![draw unet](unet/draw_unet.png)

### 3. U-Net for Building Segmenttation - PyTorch (Kaggle)
- [link](https://www.kaggle.com/code/balraj98/unet-for-building-segmentation-pytorch)

### 4. Unet Architecture image segmentation
- [UNet (Jupyter notebook)](unet/UNet.ipynb)

**Giải thích các phần quan trọng của đoạn code trên.**

#### class conv3x3 (convolution)

```python
# Define the convolutional block
def conv3x3(in_, out):
    return nn.Conv2d(in_, out, 3, padding=1)
```

- Đoạn code trên rút gọn lại class `nn.Conv2d` với filter kích thước $(3x3)$ và padding là $1$. 
- Do đó sau khi qua layer trên, tensor sẽ không có thay đổi gì về kích thước ảnh, mà sẽ thay đổi số channel từ $in\_$ thành $out$ cái đã được truyền vào (theo cả thiên hướng tăng số channel trong **contracting path** và thiên hướng giảm số channel trong **expansive path**).


#### class convrelu (convolution + relu)
```python
# Define the ConvRelu
class ConvRelu(nn.Module):
    def __init__(self, in_: int, out: int):
        super().__init__()
        self.conv = conv3x3(in_, out) 
        self.batchnorm = nn.BatchNorm2d() 
        self.relu = nn.ReLU(inplace=True) 

    def forward(self, x):
        x = self.conv(x) 
        x = self.batchnorm(x) 
        x = self.relu(x) 
        return x
```

- Thực ra convrelu trên không nhất thiết cần batchnorm (do mình thích nên thêm vào cho khả năng train hiệu quả hơn) nên **tạm bỏ nó qua một bên** đi.
- Class **ConvRelu** trên được tạo thành bởi 2 phần là func **conv3x3** và class **nn.ReLU**.


#### Decoder Block
```python
class DecoderBlock(nn.Module):
    def __init__(self, in_channels, middle_channels, out_channels, is_deconv=True):
        super(DecoderBlock, self).__init__()
        self.in_channels = in_channels
        
        if is_deconv:
            self.block = nn.Sequential(
                ConvRelu(in_channels, middle_channels),
                nn.ConvTranspose2d(in_channels=middle_channels, out_channels=out_channels, kernel_size=2, stride=2),
                nn.ReLU(inplace=True)
            )
        else:
            self.block = nn.Sequential(
                nn.Upsample(scale_factor=2, mode='bilinear'),
                ConvRelu(in_channels, middle_channels),
                ConvRelu(middle_channels, out_channels)
            )
            
    def forward(self, x):
        return self.block(x)
```

- Decoder block trên là từng block cho phần expansive path. 

- Class trên có 2 tùy chọn là decoder theo kiểu **upconv** hoặc kiểu **upsample**.

1. Decoder block kiểu **upconv** tạo bởi sequential gồm:
> *ConvRelu*
>  *nn.ConvTranspose2d (upconv)*
>  *nn.ReLU*

2. Decoder block kiểu **upsample** tạo bởi sequential gồm:
> *nn.Upsample* 
>  *ConvRelu*
>  *ConvRelu*
  

#### UNet11 (Xây dựng mô hình Unet) 
- Mô hình UNet11 sử dụng mô hình **vgg11** để encode.

- Tóm tắt cấu trúc class UNet11 như sau:
  
```python
# TODO: Định nghĩa lớp UNet11 kế thừa từ nn.Module
class UNet11(nn.Module):
    def __init__(self, num_classes=1, num_filters=32, pretrained=False, is_deconv=False):
        # continue

    def forward(self, x):
        # continue...
```

- Ta sẽ đi chi tiết từng method nằm trong Unet.

##### Khởi tạo UNet:

```python
    def __init__(self, num_classes=1, num_filters=32, pretrained=False, is_deconv=False):
        """
        :param num_classes: số lượng lớp đầu ra
        :param num_filters: số lượng bộ lọc sử dụng trong mạng
        :param pretrained: sử dụng mô hình VGG11 có trọng số pre-trained hay không
        """
        super().__init__()
        self.pool = nn.MaxPool2d(2, 2)

        # TODO: Lưu lại số lượng lớp đầu ra
        self.num_classes = num_classes
        
        # TODO: Kiểm tra nếu pretrained=True, sử dụng mô hình VGG11 với trọng số có sẵn
        if pretrained:
            self.encoder = models.vgg11(weights=models.vgg.VGG11_Weights.DEFAULT).features
        else:
            self.encoder = models.vgg11().features

        # TODO: Khởi tạo hàm kích hoạt ReLU
        self.relu = nn.ReLU(inplace=True)
        
        # TODO: Xây dựng các khối convolutional từ các lớp trong VGG11
        self.conv1 = nn.Sequential( # 3 to 64 channels
            self.encoder[0],
            # TODO: Thêm hàm kích hoạt ReLU
            self.relu
        )   

        self.conv2 = nn.Sequential( # 64 to 128 channels
            self.encoder[3],
            # TODO: Thêm hàm kích hoạt ReLU
            self.relu
        )

        # TODO: Tiếp tục xây dựng các khối convolutional cho conv3, conv4, conv5
        self.conv3 = nn.Sequential( # 128 to 256 channels
            self.encoder[6],
            # TODO: Thêm hàm kích hoạt ReLU
            self.relu,
            
            self.encoder[8],
            # TODO: Thêm hàm kích hoạt ReLU
            self.relu
        )
        
        self.conv4 = nn.Sequential( # 256 to 512 channels
            self.encoder[11],
            self.relu,
            
            self.encoder[13],
            self.relu   
        )
        
        self.conv5 = nn.Sequential( # 512 to 512 channels
            self.encoder[16],
            self.relu,
            
            self.encoder[18],
            self.relu
        )
        

        # TODO: Xây dựng khối center và decoder tương ứng
        self.center = DecoderBlock(256 + num_filters * 8, num_filters * 8 * 2, num_filters * 8, is_deconv=is_deconv) # 256 + 256 -> 256*2 -> 256 channels
        
        # TODO: Xây dựng các lớp decoder dec5, dec4, dec3, dec2, dec1 theo kiến trúc U-Net
        self.dec5 = DecoderBlock(512 + num_filters * 8, num_filters * 8 * 2, num_filters * 8)
        self.dec4 = DecoderBlock(512 + num_filters * 8, num_filters * 8 * 2, num_filters * 8)
        self.dec3 = DecoderBlock(256 + num_filters * 8, num_filters * 4 * 2, num_filters * 4)
        self.dec2 = DecoderBlock(128 + num_filters * 4, num_filters * 2 * 2, num_filters * 2)
        self.dec1 = DecoderBlock(64 + num_filters * 2, num_filters * 2, num_filters)
        # TODO: Xây dựng lớp final convolution
        self.final = nn.Conv2d(num_filters, num_classes, kernel_size=1)
```

**Xét đòng dưới đây:**

```python
self.encoder = models.vgg11(weights=models.vgg.VGG11_Weights.DEFAULT).features
```
hoặc  
```python
self.encoder = models.vgg11().features
```
được dùng để khởi tạo phần **encoder** của mô hình **U-Net**, lấy từ kiến trúc **VGG11**.

*Phân tích từng phần:*

1. **`models.vgg11()`**  
   - Đây là một hàm trong thư viện **`torchvision.models`**, giúp tải kiến trúc mạng **VGG11**.  
   - **VGG11** là một mạng CNN (Convolutional Neural Network) nổi tiếng, thường dùng để trích xuất đặc trưng từ ảnh.

2. **`weights=models.vgg.VGG11_Weights.DEFAULT`**  
   - Nếu tham số `pretrained=True`, ta dùng VGG11 với trọng số đã được huấn luyện trên tập **ImageNet** (một tập dữ liệu lớn cho phân loại ảnh).  
   - `models.vgg.VGG11_Weights.DEFAULT` là cách mới của PyTorch để tải trọng số pre-trained.

3. **`.features`**  
   - `models.vgg11()` trả về một mô hình VGG11 hoàn chỉnh, bao gồm:
     - **Feature extractor** (phần đầu): gồm các lớp Convolution + ReLU + MaxPooling.
     - **Classifier** (phần cuối): gồm các lớp Fully Connected (FC).
   - `.features` chỉ lấy phần đầu (feature extractor) của mạng, bỏ qua phần classifier, vì U-Net cần đặc trưng từ ảnh chứ không cần lớp phân loại.

*Kết quả:*

- Nếu `pretrained=True`, `self.encoder` sẽ là phần feature extractor của VGG11 với trọng số có sẵn.  
- Nếu `pretrained=False`, `self.encoder` sẽ là feature extractor của VGG11 nhưng với trọng số ngẫu nhiên.  

**=> Mục đích của `self.encoder` là làm backbone để trích xuất đặc trưng từ ảnh đầu vào.**


##### Kiến trúc của Vgg - models.vgg11().features
[link tìm hiểu thêm về vgg](https://debuggercafe.com/implementing-vgg11-from-scratch-using-pytorch/)

Mô hình VGG11 có 8 lớp convolution và 5 lớp pooling. Khi gọi `models.vgg11().features`, ta nhận được một danh sách các lớp:

| Chỉ số | Lớp (`self.encoder[i]`)      | Loại |
|--------|------------------------------|------|
| **0**  | `Conv2d(3, 64, kernel_size=3, padding=1)`  | **conv1** |
| 1      | `ReLU(inplace=True)`         | Activation |
| 2      | `MaxPool2d(kernel_size=2, stride=2)` | Pooling |
| **3**  | `Conv2d(64, 128, kernel_size=3, padding=1)` | **conv2** |
| 4      | `ReLU(inplace=True)`         | Activation |
| 5      | `MaxPool2d(kernel_size=2, stride=2)` | Pooling |
| **6**  | `Conv2d(128, 256, kernel_size=3, padding=1)` | **conv3** |
| 7      | `ReLU(inplace=True)`         | Activation |
| **8**  | `Conv2d(256, 256, kernel_size=3, padding=1)` | **conv3** (Lần 2) |
| 9      | `ReLU(inplace=True)`         | Activation |
| 10     | `MaxPool2d(kernel_size=2, stride=2)` | Pooling |
| **11** | `Conv2d(256, 512, kernel_size=3, padding=1)` | **conv4** |
| 12     | `ReLU(inplace=True)`         | Activation |
| **13** | `Conv2d(512, 512, kernel_size=3, padding=1)` | **conv4** (Lần 2) |
| 14     | `ReLU(inplace=True)`         | Activation |
| 15     | `MaxPool2d(kernel_size=2, stride=2)` | Pooling |
| **16** | `Conv2d(512, 512, kernel_size=3, padding=1)` | **conv5** |
| 17     | `ReLU(inplace=True)`         | Activation |
| **18** | `Conv2d(512, 512, kernel_size=3, padding=1)` | **conv5** (Lần 2) |
| 19     | `ReLU(inplace=True)`         | Activation |
| 20     | `MaxPool2d(kernel_size=2, stride=2)` | Pooling |

 Nhận xét:
1. `conv1` có **1 lớp `Conv2d`**, sau đó là `ReLU`, rồi `MaxPool2d`.
2. `conv2` có **1 lớp `Conv2d`**, sau đó là `ReLU`, rồi `MaxPool2d`.
3. `conv3` có **2 lớp `Conv2d`**, mỗi lớp có `ReLU`, sau đó là `MaxPool2d`.
4. `conv4` có **2 lớp `Conv2d`**, mỗi lớp có `ReLU`, sau đó là `MaxPool2d`.
5. `conv5` có **2 lớp `Conv2d`**, mỗi lớp có `ReLU`, sau đó là `MaxPool2d`.

 **Kết luận**
- **conv1, conv2** chỉ có **1 lớp `Conv2d`** vì ở tầng nông, ảnh còn lớn.  
- **conv3, conv4, conv5** có **2 lớp `Conv2d`** vì ở tầng sâu, ảnh nhỏ hơn, cần nhiều đặc trưng hơn.  

✅ Đây là cách thiết kế chuẩn của **VGG11** và giúp mạng có độ sâu phù hợp để học tốt hơn!


##### Forward của UNet11

```python
    def forward(self, x):
        # TODO: Thực hiện forward pass theo thứ tự các tầng conv1 -> conv5, pool giữa các tầng
        conv1 = self.conv1(x) # 64, 224x224
        conv2 = self.conv2(self.pool(conv1)) # 128, 112x112
        # TODO: Tiếp tục cho đến conv5
        conv3 = self.conv3(self.pool(conv2)) # 256, 56x56
        conv4 = self.conv4(self.pool(conv3)) # 512, 28x28
        conv5 = self.conv5(self.pool(conv4)) # 512, 14x14

        # TODO: Truyền qua tầng center
        center = self.center(self.pool(conv5)) # 256, 7x7 -> 14x14

        # TODO: Ghép nối (concat) các đặc trưng từ encoder với decoder theo từng tầng
        dec5 = self.dec5(torch.cat([center, conv5], 1)) # 28x28
        # TODO: Tiếp tục với dec4, dec3, dec2, dec1
        dec4 = self.dec4(torch.cat([dec5, conv4], dim=1)) # 56x56
        dec3 = self.dec3(torch.cat([dec4, conv3], dim=1)) # 112x112
        dec2 = self.dec2(torch.cat([dec3, conv2], dim=1)) # 244x244
        dec1 = self.dec1(torch.cat([dec2, conv1], dim=1)) # 448x448
        
        # fix bug
        dec1 = self.pool(dec1) # 244x244
        
        # TODO: Kiểm tra nếu num_classes > 1, sử dụng log_softmax, ngược lại sử dụng conv đầu ra
        if self.num_classes > 1:
            x_out = F.log_softmax(self.final(dec1), dim=1)
        else:
            x_out = self.final(dec1)

        return x_out

```

---

### IoU ( Intersection over Union )

- Hàm `iou_pytorch` dưới đây được viết để tính **Intersection over Union (IoU)** giữa đầu ra của mô hình (`outputs`) và nhãn thực tế (`labels`).

#### Công thức IoU:
\[
IoU = \frac{\text{intersection} + \text{SMOOTH}}{\text{union} + \text{SMOOTH}}
\]
Trong đó:
- **Intersection** (phần giao nhau): số pixel được dự đoán đúng (cả `outputs` và `labels` đều bằng 1).
- **Union** (phần hợp): tổng số pixel thuộc vùng dự đoán hoặc vùng thực tế.

#### Code ví dụ:
```python
def iou_pytorch(outputs, labels):
    outputs = outputs.squeeze().byte()  # BATCH x 1 x H x W => BATCH x H x W
    labels = labels.squeeze().byte()

    SMOOTH = 1e-8

    # Tính toán phần giao nhau (intersection)
    intersection = (outputs & labels).sum(dim=(1, 2))  # Giữ lại batch size

    # Tính toán phần hợp (union)
    union = (outputs | labels).sum(dim=(1, 2))  # Giữ lại batch size

    # Tính toán IoU
    iou = (intersection + SMOOTH) / (union + SMOOTH)

    return iou.mean()  # Trả về IoU trung bình cho batch
```

#### Giải thích:
- `outputs.squeeze().byte()`: Loại bỏ chiều không cần thiết (`1`) và ép kiểu về `byte` (`0` hoặc `1`).
- `labels.squeeze().byte()`: Làm tương tự với `labels`.
- `outputs & labels`: Thực hiện phép toán `AND` để tìm phần giao nhau.
- `outputs | labels`: Thực hiện phép toán `OR` để tìm phần hợp.
- `.sum(dim=(1, 2))`: Tổng hợp theo các chiều không gian (H, W), giữ lại batch size.
- `iou.mean()`: Tính IoU trung bình của cả batch.

#### Ví dụ sử dụng:
```python
outputs = torch.randint(0, 2, (4, 1, 256, 256))  # Giả lập đầu ra của mô hình
labels = torch.randint(0, 2, (4, 1, 256, 256))  # Giả lập nhãn thực tế

iou_score = iou_pytorch(outputs, labels)
print("IoU:", iou_score.item())
```
---
Cách này giúp tính IoU nhanh và hiệu quả trên GPU nếu cần (`.sum()` chạy nhanh trên tensor).

---

## Phần III: Cách cài đặt UNet bằng PyTorch
- Chưa viết