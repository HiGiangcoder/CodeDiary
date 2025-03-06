###GRANICA
Luka bắt đầu hành trình xung quanh thế giới với chiếc xe tải của mình. Tuy nhiên, anh gặp vấn đề với biên giới của Slovenia. Nó là điểm dẫn vào EU nên mọi chiếc xe tải đều được kiểm tra kĩ lưỡng. Việc này tốn rất nhiều thời gian và Luka phải chờ đợi nhiều giờ liền. Để giết thời gian, Luka nghĩ ra những trò chơi về logic và toán. 

Trong số những trò chơi cậu nghĩ ra, có một trò chơi như sau: Đầu tiên, Luka đọc $N$ biển số xe và viết chúng lên một mảnh giấy. Sau đó, cậu tìm ra một số nguyên $M$ lớn hơn $1$ sao cho mọi số nguyên trên tờ giấy khi chia lấy dư cho $M$ đều ra cùng một kết quả. Luka muốn tìm được nhiều số $M$ thỏa mãn nhất có thể.

Cho biết $N$ số nguyên Luka đã viết, hãy tìm ra tất cả số nguyên $M$ thỏa mãn điều kiện đề bài.

####Input
 - Dòng đầu tiên chứa một số nguyên $N$ $(2 \leq N \leq 100)$, số lượng số nguyên của Luka.
 - $N$ dòng tiếp theo, mỗi dòng chứa một số nguyên trong khoảng $[1, 10^{9}]$. Dữ liệu đảm bảo $N$ số nguyên này là phân biệt và luôn tồn tại ít nhất một số $M$ thỏa mãn.

####Output
 - In ra tất cả số nguyên $M$ thỏa mãn theo thứ tự bất kì.
####Scoring
 - Subtask 1: $N \leq 10000$ $(60\%)$.
 - Subtask 2: Không có ràng buộc gì thêm.

!!! question "Test 1"
    ???+ "Input"
        ```sample
        3
        6
        34
        38
        ```
    ???+ success "Output"
        ```sample
        2 4
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        5
        5
        17
        23
        14
        83
        ```
    ???+ success "Output"
        ```sample
        3
        ```
??? warning "Note"

    Trong test đầu tiên, mọi số trong dãy khi chia $2$ đều dư $0$ và khi chia $4$ đều dư $2$.
        