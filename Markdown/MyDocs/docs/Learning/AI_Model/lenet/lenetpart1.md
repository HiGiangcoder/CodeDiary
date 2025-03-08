# LeNet-5 Model Tutorial (PART 1)

## Nguyễn Trường Giang

### Ngày 6 tháng 2 năm 2025

## Mục lục

- [LeNet-5 Model Tutorial (PART 1)](#lenet-5-model-tutorial-part-1)
  - [Nguyễn Trường Giang](#nguyễn-trường-giang)
    - [Ngày 6 tháng 2 năm 2025](#ngày-6-tháng-2-năm-2025)
  - [Mục lục](#mục-lục)
  - [Giới thiệu về tài liệu này](#giới-thiệu-về-tài-liệu-này)
  - [Giới thiệu về LeNet-5](#giới-thiệu-về-lenet-5)
  - [Cấu trúc tổng quan của LeNet-5](#cấu-trúc-tổng-quan-của-lenet-5)
  - [Một số giới hạn](#một-số-giới-hạn)
  - [Mô tả chi tiết về các Layer](#mô-tả-chi-tiết-về-các-layer)
    - [Convolutional Layer](#convolutional-layer)
    - [Pooling layer (Downsampling)](#pooling-layer-downsampling)
    - [Hàm `nn.Flatten()`](#hàm-nnflatten)
    - [Hàm `nn.Linear()`](#hàm-nnlinear)
  - [Một số hàm cần thiết cho việc build LeNet-5 model](#một-số-hàm-cần-thiết-cho-việc-build-lenet-5-model)
    - [**Loss functions**:](#loss-functions)
    - [**Các hàm optimizers**:](#các-hàm-optimizers)
  - [Một số Activation function phi tuyến phổ biến](#một-số-activation-function-phi-tuyến-phổ-biến)
    - [**ReLU**: `max(0, x)`](#relu-max0-x)
    - [**Leaky ReLU**: `max(αx, x)`](#leaky-relu-maxαx-x)
    - [**Sigmoid**: `1 / (1 + e^-x)`](#sigmoid-1--1--e-x)
    - [**Tanh**: `(e^x - e^-x) / (e^x + e^-x)`](#tanh-ex---e-x--ex--e-x)
    - [**Softmax**: `e^x_i / sum(e^x_j)`](#softmax-ex_i--sumex_j)
  - [Ví dụ về một LeNet-5 phân loại thời trang](#ví-dụ-về-một-lenet-5-phân-loại-thời-trang)

---

## Giới thiệu về tài liệu này

Đây là tài liệu được tổng hợp bởi nhiều nguồn, tóm tắt và viết trong quá trình học của mình. Nếu có sai sót mong mọi người thông cảm.

## Giới thiệu về LeNet-5

LeNet-5 là một kiến trúc mạng nơ-ron tích chập (CNN) được phát triển bởi Yann LeCun vào năm 1998. Đây là một trong những mô hình CNN đầu tiên, đặt nền tảng cho sự phát triển của Deep Learning trong nhận dạng hình ảnh.

## Cấu trúc tổng quan của LeNet-5

LeNet-5 được thiết kế chủ yếu để nhận dạng chữ số viết tay và hình ảnh nhỏ. Kiến trúc gồm 7 lớp (không tính input), gồm:
- **Convolutional Layer** (Tích chập)
- **Pooling Layer** (Lấy mẫu)
- **Fully Connected Layer** (Kết nối đầy đủ)

## Một số giới hạn

- Không hiệu quả với dữ liệu lớn, phức tạp (vd: ảnh RGB kích thước lớn).
- Các mô hình hiện đại như ResNet, VGG đã thay thế LeNet trong nhiều ứng dụng.

## Mô tả chi tiết về các Layer

### Convolutional Layer

- **Khái niệm**: Thực hiện phép tích chập giữa dữ liệu đầu vào và một hoặc nhiều **kernel** để trích xuất đặc trưng.
- **Quá trình hoạt động**:
  1. **Input**: Hình ảnh (grayscale 100×200×1 hoặc RGB 69×96×3).
  2. **Kernel**: Ma trận nhỏ (vd: 3×3, 5×5), có tham số học được.
  3. **Phép toán Convolution**: Kernel trượt qua ảnh và tính tích vô hướng.
  4. **Activation function**: Sử dụng ReLU hoặc Sigmoid.
  5. **Feature Maps**: Mỗi kernel tạo ra một feature map.

- **Công thức tính Output size**:
  ```
  Output size = (Input size - Kernel size + 2 * Padding) / Stride + 1
  ```

- **Cú pháp trong PyTorch**:
  ```python
  torch.nn.Conv2d(in_channels, out_channels, kernel_size, stride=1, padding=0)
  ```

### Pooling layer (Downsampling)

- **Khái niệm**: Giảm số lượng tham số của mô hình.
- **Các loại pooling**:
  - Max Pooling
  - Average Pooling

- **Cú pháp trong PyTorch**:
  ```python
  torch.nn.MaxPool2d(kernel_size, stride=None, padding=0)
  ```

### Hàm `nn.Flatten()`

- **Chuyển tensor nhiều chiều thành tensor một chiều**.
- **Cú pháp**:
  ```python
  torch.nn.Flatten(start_dim=1, end_dim=-1)
  ```

### Hàm `nn.Linear()`

- **Tạo một lớp fully connected**.
- **Cú pháp**:
  ```python
  torch.nn.Linear(in_features, out_features, bias=True)
  ```

## Một số hàm cần thiết cho việc build LeNet-5 model

### **Loss functions**:
  - `nn.MSELoss()`
  - `nn.L1Loss()`
  - `nn.CrossEntropyLoss()`

### **Các hàm optimizers**:
  - `optim.SGD()`
  - `optim.Adam()`
  - `optim.AdamW()`

## Một số Activation function phi tuyến phổ biến

### **ReLU**: `max(0, x)`
```python
import torch
import torch.nn.functional as F
x = torch.tensor([-1.0, 0.0, 1.0])
relu_output = F.relu(x)
print(relu_output)
```

### **Leaky ReLU**: `max(αx, x)`
```python
leaky_relu = F.leaky_relu(x, negative_slope=0.01)
print(leaky_relu)
```

### **Sigmoid**: `1 / (1 + e^-x)`
```python
sigmoid_output = torch.sigmoid(x)
print(sigmoid_output)
```

### **Tanh**: `(e^x - e^-x) / (e^x + e^-x)`
```python
tanh_output = torch.tanh(x)
print(tanh_output)
```

### **Softmax**: `e^x_i / sum(e^x_j)`
```python
softmax_output = F.softmax(x, dim=0)
print(softmax_output)
```


## Ví dụ về một LeNet-5 phân loại thời trang

```python
import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import datasets, transforms

# Định nghĩa mô hình LeNet-5
class LeNet5(nn.Module):
    def __init__(self):
        super(LeNet5, self).__init__()
        self.conv1 = nn.Conv2d(1, 6, kernel_size=5, stride=1, padding=2)
        self.pool1 = nn.AvgPool2d(kernel_size=2, stride=2)
        self.conv2 = nn.Conv2d(6, 16, kernel_size=5)
        self.pool2 = nn.AvgPool2d(kernel_size=2, stride=2)
        self.fc1 = nn.Linear(16 * 5 * 5, 120)
        self.fc2 = nn.Linear(120, 84)
        self.fc3 = nn.Linear(84, 10)
    
    def forward(self, x):
        x = torch.tanh(self.conv1(x))
        x = self.pool1(x)
        x = torch.tanh(self.conv2(x))
        x = self.pool2(x)
        x = x.view(x.size(0), -1)
        x = torch.tanh(self.fc1(x))
        x = torch.tanh(self.fc2(x))
        x = self.fc3(x)
        return x
```

---

Tài liệu này cung cấp kiến thức cơ bản về LeNet-5 và cách triển khai mô hình bằng PyTorch. Hy vọng nó sẽ hữu ích cho bạn!
