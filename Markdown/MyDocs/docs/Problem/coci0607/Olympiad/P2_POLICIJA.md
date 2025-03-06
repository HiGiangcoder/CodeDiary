### POLICIJA 
Nhằm giúp bắt giữ tội phạm đang chạy trốn, cảnh sát đang triển khai một hệ thống máy tính mới. Khu vực do cảnh sát kiểm soát có $N$ thành phố và $E$ con đường hai chiêu kết nối các thành phố. Các thành phố được đánh số từ $1$ đến $N$.

Cảnh sát thường muốn bắt tội phạm đang cố gắng di chuyển từ thành phố này qua thành phố khác. Các thanh tra, khi nhìn vào bản đồ, họ sẽ cố gắng xác định nơi để dựng rào chắn và trạm kiểm soát. Hệ thống máy tính mới có thể trả lời các truy vấn sau:

1. Xét hai thành phố $A$ và $B$, và con đường kết nối giữa thành phố $G1$ và $G2$. Nếu con đường giữa thành phố $G1$ và $G2$ bị chặn thì những tên tội phạm có thể đi từ thành phố $A$ đến thành phố $B$ hay không.

2. Xét ba thành phố $A$, $B$ và $C$. Liệu tên tội phạm có thể đi từ thành phố $A$ đến thành phố $B$ nếu toàn bộ thành phố $C$ bị phong tỏa và tên tội phạm không thể tiếp cận thành phố $C$ không.

Viết một chương trình có thể thực hiện mô tả của hệ thống.


#### Input: 
- Dòng đầu tiên chứa 2 số nguyên $N$ và $E$ $(2 \le N \le 10^5; 1 \le E \le 5 \times 10^5)$ là số lượng thành phố và số con đường.
- Mỗi dòng trong số $E$ dòng tiếp theo chữa hai số nguyên phân biệt từ $1$ đến $N$ mô tả chỉ số của 2 thành phố được kết nối với nhau qua con đường (có nhiều nhất một con đường được kết nối giữa mỗi cặp thành phố).
- Dòng tiếp theo chứa số nguyên $Q$ $(1 \le Q \le 3 \times 10^5)$ thể hiện số truy vấn của hệ thống.
- Mỗi dòng trong số $Q$ dòng tiếp theo chứa $4$ hoặc $5$ số nguyên:
    + Số đầu tiên là một số nguyên là $1$ hoặc $2$ thể hiện loại của truy vấn.
    + Nếu là quy vấn loại 1, thì tiếp theo gồm $4$ số nguyên $A$, $B$, $G1$, $G2$. Dữ liệu đảm bảo rằng $A$ và $B$ là khác nhau, và $G1$, $G2$ là con đường tồn tại.
    + Nếu là truy vấn loại 2, thì tiếp theo gồm $3$ số nguyên $A$, $B$ và $C$. Dữ liệu đảm bảo rằng $A$, $B$ và $C$ đôi một phân biệt.
- Dữ liệu đầu vào sẽ đảm bảo sao cho giữa hai thành phố bất kỳ luôn tồn tại ít nhất một đường đi.


#### Output: 
- In ra đáp án của $Q$ truy vẫn trên mỗi dòng. Đáp án của từng truy vấn in ra thoe định dạng `yes` hoặc là `no`.
  
**Lưu ý:** Nếu chương trình của bạn trả lòi chính xác tất cả các truy vấn của một loại nhưng sai loại còn lại, bạn sẽ chỉ nhận **$50\%$ số điểm** cho test đó. Tuy nhiên ngay cả vậy, bạn vẫn phải in ra đầy đủ đáp án của cả $Q$ truy vấn (các truy vấn còn lại có thể trả lời tuỳ ý).

#### Example:

!!! question "Test 1"
    ???+ "Input"
        ```
        13 15
        1 2
        2 3
        3 5
        2 4
        4 6
        2 6
        1 4
        1 7
        7 8
        7 9
        7 10
        8 11
        8 12
        9 12
        12 13
        5
        1 5 13 1 2
        1 6 2 1 4
        1 13 6 7 8
        2 13 6 7
        2 13 6 8 
        ```
    ???+ "Output"
        ```
        yes
        yes
        yes
        no
        yes 
        ```