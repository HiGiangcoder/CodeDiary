###Jogurt
Một cây nhị phân đầy đủ bao gồm các đỉnh được sắp xếp theo cấu trúc phân tầng. Trong đó có một đỉnh gốc ở tầng $0$. Đỉnh gốc có $2$ đỉnh con ở tầng $1$, mỗi đỉnh con ở tầng $1$ lại có $2$ đỉnh con ở tầng $2$, v.v.

Tổng quát hơn, một cây nhị phân đầy đủ có $N$ tầng sẽ có $2^{N}-1$ đỉnh, mỗi đỉnh có đúng $2$ đỉnh con (Trừ những đỉnh ở tầng $N-1$).

Cho một cây nhị phân đầy đủ $N$ tầng. Hãy đánh số mỗi đỉnh của cây bằng một số trong khoảng từ $1$ đến $2^{N}-1$, mỗi số được sử dụng duy nhất một lần sao cho với mỗi đỉnh ở tầng $D$, giá trị tuyệt đối của hiệu giữa tổng các số trong cây con bên trái và tổng các số trong cây con bên phải bằng $2^{D}$. Nếu có nhiều cách đánh số thỏa mãn, in ra một cách bất kì.

Ví dụ, hiệu giữa tổng các số trong cây con bên trái và cây con bên phải của đỉnh gốc phải bằng $1$. Với các đỉnh ở tầng $1$, hiệu giữa tổng các số trong hai cây con của mỗi đỉnh phải bằng $2$.
#### Input
- Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 15)$, số tầng của cây.
#### Output
- In ra $2^{N}-1$ số trên một dòng theo thứ tự duyệt cây nhị phân (Số đầu tiên là của đỉnh gốc, tiếp theo là cây con bên trái, rồi đến cây con bên phải) 



!!! question "Test 1"
    ???+ "Input"
        ```sample
        2
        ```
    ???+ success "Output"
        ```sample
        3 1 2
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        3
        ```
    ???+ success "Output"
        ```sample
        3 1 7 5 6 2 4

        ```