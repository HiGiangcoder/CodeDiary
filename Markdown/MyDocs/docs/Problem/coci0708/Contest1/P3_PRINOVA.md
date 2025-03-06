###PRINOVA
Brojko và Brojana là một cặp vợ chồng. Họ có $N$ bé trai, được đặt tên bằng $N$ số nguyên **chẵn** phân biệt $P_1, P_2, ..., P_N$.

Gia đình của Brojko và Brojana chuẩn bị đón thêm một bé gái và họ muốn chuẩn bị một cái tên thật đẹp cho cô bé. Họ đã quyết định tên của bé sẽ là một số **lẻ** năm trong khoảng $[A, B]$. Họ cảm thấy mọi số trong khoảng $[A, B]$ đều đẹp như nhau nên họ muốn chọn số có khoảng cách lớn nhất tới số gần nhất trong danh sách tên của các cậu con trai.

Cụ thể hơn, họ muốn tìm một số lẻ $X \in [A, B]$ sao cho $min$$\{|X - P_i|, i \in [1, N]\}$ là lớn nhất có thể.

Viết chương trình xác định tên cho bé gái. Nếu có nhiều đáp án, in ra bất kì.

####Input
 - Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 100)$, số lượng bé trai.
 - Dòng thứ hai chứa $N$ số chẵn phân biệt, thể hiện tên của các bé trai. Các số đảm bảo bé hơn $10^{9}$.
 - Dòng thứ ba chứa hai số nguyên $A$ và $B$ $(1 \leq A \le B \leq 10^{9})$, khoảng tên họ muốn chọn cho bé gái.
####Output
 - In ra một số nguyên là tên của bé gái.

!!! question "Test 1"
    ???+ "Input"
        ```sample
        3
        2 6 16
        20 50
        ```
    ???+ success "Output"
        ```sample
        49
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        3
        2 6 16
        3 15
        ```
    ???+ success "Output"
        ```sample
        11
        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        3
        2 6 16
        1 7
        ```
    ???+ success "Output"
        ```sample
        5
        ```