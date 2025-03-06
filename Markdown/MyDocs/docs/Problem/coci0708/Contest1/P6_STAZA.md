###STAZA
Một đất nước nọ đang tổ chức một cuộc đua xe đạp. Mạng lưới giao thông của quốc gia này bao gồm $N$ thành phố được đánh số từ $1$ đến $N$ với $M$ con đường hai chiều kết nối giữa các thành phố. Chúng ta có một số định nghĩa như sau:
 - Một **đường đi** là một cách di chuyển từ thành phố này đến một thành phố khác qua các con đường nối giữa các thành phố.
 - Một **đường đi đơn** là đường đi mà mỗi con đường trên đường đi đó chỉ được đi qua đúng một lần.
 - Một **chu trình đơn** là một **đường đi đơn** kết thúc và bắt đầu ở cùng một thành phố.

Mạng lưới giao thông đảm bảo luôn có **ít nhất một đường đi** giữa mọi cặp thành phố. Ngoài ra, mỗi con đường trong mạng lưới đều nằm trong **tối đa một chu trình đơn**.

Nhiện vụ của bạn là tìm ra đường đi dài nhất thỏa mãn:
 - Đường đi kết thúc ở thành phố $1$.
 - Mỗi con đường thuộc đường đi chỉ được đi qua đúng $1$ lần.
####Input
 - Dòng đầu tiên chứa $2$ số nguyên $N$ và $M$ $(2 \leq N \leq 10000, 1 \leq M \leq 2N-2)$ - Số thành phố và đường đi trong mạng lưới.
 - $M$ dòng tiếp theo, mỗi dòng chứa $2$ số nguyên phân biệt $A$ và $B$ $(1 \leq A,B \leq N)$, thể hiện một đường đi nối $2$ thành phố $A$ và $B$. Giữa hai thành phố có tối đa $1$ con đường.
####Output
 - In ra độ dài đường đi dài nhất thỏa mãn yêu cầu của đề bài.

!!! question "Test 1"
    ???+ "Input"
        ```sample
        4 3
        1 2
        1 3
        2 4 
        ```
    ???+ success "Output"
        ```sample
        2
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        6 6
        1 2
        1 3
        2 4
        3 4
        3 5
        5 6 
        ```
    ???+ success "Output"
        ```sample
        5
        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        5 6
        1 2
        2 3
        3 4
        4 5
        5 3
        3 1 
        ```
    ???+ success "Output"
        ```sample
        6        
        ```
