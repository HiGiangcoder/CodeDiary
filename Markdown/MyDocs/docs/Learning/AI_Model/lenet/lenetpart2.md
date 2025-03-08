# CNN Model Tutorial - Part 2

## Mục lục

- [CNN Model Tutorial - Part 2](#cnn-model-tutorial---part-2)
  - [Mục lục](#mục-lục)
  - [Cấu trúc một mô hình tạo bởi PyTorch bằng OOP](#cấu-trúc-một-mô-hình-tạo-bởi-pytorch-bằng-oop)
    - [Giải thích](#giải-thích)
  - [Early stopping](#early-stopping)
  - [Learning rate scheduler](#learning-rate-scheduler)
  - [Hàm `train_model()`](#hàm-train_model)
  - [Độ đo đánh giá (các loại đánh giá)](#độ-đo-đánh-giá-các-loại-đánh-giá)
  - [Confusion Matrix (ma trận nhầm lẫn)](#confusion-matrix-ma-trận-nhầm-lẫn)
  - [Data Augmentation (tăng cường dữ liệu)](#data-augmentation-tăng-cường-dữ-liệu)
  - [Ví dụ hoàn chỉnh](#ví-dụ-hoàn-chỉnh)

---

## Cấu trúc một mô hình tạo bởi PyTorch bằng OOP

```python
import torch
import torch.nn as nn

class SimpleNN(nn.Module):
    def __init__(self):
        super(SimpleNN, self).__init__()
        self.conv1 = nn.Conv2d(in_channels=1, out_channels=9, kernel_size=3, padding=2)
        self.AvgPool1 = nn.AvgPool2d(kernel_size=2, stride=2)
        self.Flatten = nn.Flatten()
        self.fc1 = nn.Linear(9*15*15, 36)
        self.fc2 = nn.Linear(36, 10)
    
    def forward(self, x):
        x = torch.relu(self.conv1(x))
        x = self.AvgPool1(x)
        x = self.Flatten(x)
        x = torch.relu(self.fc1(x))
        x = self.fc2(x)
        return x
```

### Giải thích
- `__init__`: Khai báo các layers.
- `forward`: Xây dựng luồng tính toán khi truyền dữ liệu qua mô hình.

---

## Early stopping

Early Stopping giúp tránh overfitting bằng cách dừng training nếu hiệu suất không cải thiện sau một số epoch nhất định.

```python
class EarlyStopping:
    def __init__(self, patience=7, delta=0):
        self.patience = patience
        self.delta = delta
        self.counter = 0
        self.best_score = None
        self.early_stop = False
        self.best_model_state = None

    def __call__(self, val_loss, model):
        if self.best_score is None or val_loss < self.best_score - self.delta:
            self.best_score = val_loss
            self.counter = 0
            self.best_model_state = model.state_dict()
        else:
            self.counter += 1
            if self.counter >= self.patience:
                self.early_stop = True

    def load_best_model(self, model):
        model.load_state_dict(self.best_model_state)
```

---

## Learning rate scheduler

```python
import torch.optim as optim
optimizer = optim.Adam(model.parameters(), lr=0.01)
scheduler = optim.lr_scheduler.ReduceLROnPlateau(optimizer, mode='min', factor=0.1, patience=5)
```

Sử dụng trong vòng lặp training:

```python
for epoch in range(100):
    train_loss = train_model()
    val_loss = validate_model()
    scheduler.step(val_loss)
```

---

## Hàm `train_model()`

```python
def train_model(model, dataloader, criterion, optimizer, device):
    model.train()
    running_loss = 0.0
    for inputs, targets in dataloader:
        inputs, targets = inputs.to(device), targets.to(device)
        optimizer.zero_grad()
        outputs = model(inputs)
        loss = criterion(outputs, targets)
        loss.backward()
        optimizer.step()
        running_loss += loss.item() * inputs.size(0)
    return running_loss / len(dataloader.dataset)
```

---

## Độ đo đánh giá (các loại đánh giá)

- **Accuracy**:
  ```math
  Accuracy = \frac{TP + TN}{TP + FP + TN + FN}
  ```

- **Precision**:
  ```math
  Precision = \frac{TP}{TP + FP}
  ```

- **Recall**:
  ```math
  Recall = \frac{TP}{TP + FN}
  ```

- **F1-score**:
  ```math
  F1-score = \frac{2 \times Precision \times Recall}{Precision + Recall}
  ```

---

## Confusion Matrix (ma trận nhầm lẫn)

```python
from sklearn.metrics import confusion_matrix
import numpy as np
y_true = np.array([1, 0, 1, 1, 0, 1, 0, 0, 1, 0])
y_pred = np.array([1, 0, 1, 0, 0, 1, 0, 1, 1, 0])
cm = confusion_matrix(y_true, y_pred)
print("Confusion Matrix:\n", cm)
```

---

## Data Augmentation (tăng cường dữ liệu)

```python
import torchvision.transforms as transforms
transform_augmented = transforms.Compose([
    transforms.RandomRotation(15),
    transforms.RandomAffine(0, shear=10, scale=(0.8, 1.2)),
    transforms.ToTensor()
])
```

---

## Ví dụ hoàn chỉnh

Một mô hình hoàn chỉnh sử dụng `EarlyStopping`, `train_model`, `validate_model`, và `ReduceLROnPlateau` có thể được tìm thấy trong tài liệu gốc.

---

_Tài liệu hướng dẫn bởi Nguyễn Trường Giang - Ngày 6 tháng 2 năm 2025._
