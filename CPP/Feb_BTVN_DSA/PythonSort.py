import time

start = time.time()  # Bắt đầu đếm thời gian

# Code cần đo thời gian
for _ in range(int(1e7)):
    pass

end = time.time()  # Kết thúc đếm thời gian
print(f"Thời gian chạy: {end - start:.6f} giây")
