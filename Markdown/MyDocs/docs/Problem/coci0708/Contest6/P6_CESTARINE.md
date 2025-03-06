###CESTARINE

Trong một ngày, có $N$ chiếc xe tải của Luka di chuyển trên một con đường cao tốc. Con đường cao tốc này có nhiều lối ra và lối vào. Một lối ra có một số nhất định sẽ nằm cùng vị trí với lối vào có cùng số đó.

Khi vào đường cao tốc, tài xế xe tải sẽ nhận được một vé ghi rõ lối vào mà anh ta đã sử dụng. Khi ra khỏi đường cao tốc, tài xế phải trả một khoản phí bằng với giá trị tuyệt đối của hiệu số giữa số lối vào và số lối ra. Ví dụ, nếu vé ghi rằng anh ta đã vào tại lối vào số $30$, thì khi ra tại lối ra số $12$, anh ta sẽ phải trả $18$ đơn vị phí.

Luka đã tìm ra một cách để tiết kiệm tiền phí mà công ty anh ta phải chi trả hàng ngày. Hai tài xế bất kỳ có thể gặp nhau trên đường cao tốc và trao đổi vé, ngay cả khi lộ trình của họ không trùng nhau. Các vé có thể được trao đổi một số lần tùy ý.

Tuy nhiên, **một tài xế không thể sử dụng một lối ra nếu vé của anh ta ghi rằng anh ta đã vào từ chính lối vào đó**, vì điều đó sẽ gây nghi ngờ.

Hãy viết một chương trình tính toán tổng phí tối thiểu mà các tài xế có thể đạt được bằng cách trao đổi vé.

####Input
 - Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 100000)$, số lượng xe tải.
 - $N$ dòng tiếp theo, mỗi dòng chứa hai số nguyên phân biệt trong khoảng từ $1$ đến $1000000$, lần lượt thể hiện số của lối vào và lối ra của những chiếc xe.
 - **Lối vào và lối ra của mỗi xe là duy nhất**, tức là không có hai xe nào có cùng lối vào hoặc lối ra.

####Output
 - In ra số tiền tối thiểu mà công ty của Luka phải chi trả.

**Note:** Sử dụng kiểu dữ liệu 64-bit (long long trong C/C++, int64 trong Pascal)

!!! question "Test 1"
    ???+ "Input"
        ```sample
        3
        3 65
        45 10
        60 25 
        ```
    ???+ success "Output"
        ```sample
        32
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        3
        5 5
        6 7
        8 8
        ```
    ???+ success "Output"
        ```sample
        5
        ```
??? warning "Note"

    Trong test đầu tiên, tài xế số $1$ và tài xế số $3$ sẽ đổi vé cho nhau. Sau đó, tài xế số $2$ lại đổi vé với tài xế số $3$. Lúc này, số vé của $3$ tài xế lần lượt là $60$, $3$ và $45$. Tổng số tiền mà công ty phải chi trả sẽ là $|65-60|+|10-3|+|25-45| = 32$