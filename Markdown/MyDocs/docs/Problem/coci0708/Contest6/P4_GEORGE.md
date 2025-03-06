###GEORGE
Tuần trước, ngài George đã đến thăm Croatia. Vì ngài George là một người rất quan trọng, nên khi ông ấy có mặt trên một con phố, cảnh sát đã cấm các phương tiện đi vào con phố đó. Tuy nhiên, các phương tiện đã vào phố trước khi ngài George đến thì vẫn có thể tiếp tục di chuyển.

Trong thời gian ngài George thăm thành phố, Luka lái xe tải đi giao hàng. Nhưng do một số con phố bị chặn, anh ấy không thể giao hàng đúng hạn và suýt mất việc. Mặc dù mọi chuyện đã qua, nhưng bây giờ Luka muốn biết thời gian ít nhất cần thiết để hoàn thành việc giao hàng trong khi ngài George đang có mặt trong thành phố. Anh ấy biết trước lộ trình mà ngài George đã đi.

Thành phố có thể được biểu diễn bằng các giao lộ và các con đường kết nối chúng với nhau. Với mỗi con đường, Luka biết thời gian cần để đi qua con đường đó (Ông George cũng cần một khoảng thời gian tương tự).

Ví dụ, nếu ông George bắt đầu đi vào một con đường ở phút thứ $10$ và cần $5$ phút để đi qua, con đường đó sẽ bị chặn trong phút thứ $10, 11, 12, 13$ và $14$. Luka có thể đi vào con đường trước phút thứ $10$ hoặc sau phút $15$.

Viết chương trình tính thời gian ít nhất Luka cần để giao hàng, nếu anh ấy bắt đầu lái xe $K$ phút sau khi ông George đến thăm.

####Input
 - Dòng đầu tiên chứa $2$ số nguyên $N$ và $M$ $(2 \leq N \leq 1000, 2 \leq M \leq 10000)$, số giao lộ và con đường trong thành phố, các giao lộ được đánh số từ $1$ đến $N$.
 - Dòng thứ hai chứa $4$ số nguyên $A, B, K$ và $G$ $(1 \leq A,B \leq N,\ 0 \leq K \leq 1000,\ 0 \leq G \leq 1000)$, lần lượt là:
     - Giao lộ Luka bắt đầu đi.
     - Giao lộ Luka cần đi tới.
     - Thời gian Luka bắt đầu đi sau khi ông George đến. (Luka bắt đầu ở giao lộ $A$ sau khi ông George đã đến $K$ phút)
     - Số giao lộ trên đường đi của ông George.
 - Dòng thứ ba chứa $G$ số nguyên là các giao lộ mà ông George sẽ đi qua. Mỗi cặp giao lộ kề nhau thể hiện con đường mà ông ấy sẽ đi qua. Dữ liệu đảm bảo con đường đó luôn tồn tại và với mỗi con đường, ông George chỉ đi qua đúng một lần.
 - $M$ dòng tiếp theo, mỗi dòng chứa $3$ số nguyên $A, B$ và $L$, thể hiện một con đường nối giữa $A$ và $B$ và cần $L\ (1 \leq L \leq 1000)$ phút để đi qua.
####Output
 - In ra thời gian ngắn nhất (tính theo phút) để Luka giao hàng.
!!! question "Test 1"
    ???+ "Input"
        ```sample
        6 5
        1 6 20 4
        5 3 2 4
        1 2 2
        2 3 8
        2 4 3
        3 6 10
        3 5 15 
        ```
    ???+ success "Output"
        ```sample
        21
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        8 9
        1 5 5 5
        1 2 3 4 5
        1 2 8
        2 7 4
        2 3 10
        6 7 40
        3 6 5
        6 8 3
        4 8 4
        4 5 5
        3 4 23 
        ```
    ???+ success "Output"
        ```sample
        40
        ```