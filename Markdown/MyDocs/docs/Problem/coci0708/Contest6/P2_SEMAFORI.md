###SEMAFORI
Luka đang lái xe trên một con đường với rất nhiều đèn giao thông. Với mỗi cột đèn, cậu ấy biết đèn xanh và đèn đỏ sẽ được bật bao lâu.

Khi Luka bắt đầu đi, tất cả đèn giao thông đều chuyển sang màu đỏ và bắt đầu chạy. Luka đi được $1$ đơn vị mỗi giây. Khi gặp đèn đỏ, cậu ấy sẽ dừng lại và chờ đèn xanh để đi tiếp.

Viết chương trình tính thời gian để Luka đi được đến cuối con đường. Con đường bắt đầu ở $0$ và kết thúc ở $L$ đơn vị.

####Input
 - Dòng đầu tiên chứa hai số nguyên $N$ và $L$ $(1 \leq N \leq 100, 1 \leq L \leq 100)$, số lượng đèn giao thông và độ dài của con đường.
 - $N$ dòng tiếp theo, mỗi dòng chứa $3$ số nguyên  $D, R, G$ $(1 \leq D < L, 1 \leq R \leq 100, 1\leq G \leq 100)$, biểu diễn một cột đèn giao thông. $D$ là khoảng cách của cột đèn tính từ đầu con đường, $R$ và $G$ lần lượt là thời gian sáng đèn của đèn đỏ và đèn xanh.
 - Các cột đèn sẽ được sắp xếp theo thứ tự $D$ tăng dần. Không có $2$ cột đèn nào ở chung vị trí.

####Output
 - In ra thời gian cần để Luka đi hết con đường.

!!! question "Test 1"
    ???+ "Input"
        ```sample
        2 10
        3 5 5
        5 2 2
        ``` 
    ???+ success "Output"
        ```sample
        12
        ```
!!! question "Test 2"
    ???+ "Input"
        ```
        4 30
        7 13 5
        14 4 4
        15 3 10
        25 1 1
        ``` 
    ???+ success "Output"
        ```sample
        36
        ```

??? warning "Note"

    Trong test đầu tiên, Luka sẽ dừng đèn đỏ $2$ giây ở đèn giao thông đầu tiên, gặp đèn xanh ở cột đèn thứ $2$ và đi thẳng tới hết đường.
        