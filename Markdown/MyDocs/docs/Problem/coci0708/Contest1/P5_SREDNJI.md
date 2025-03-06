###SREDNJI
Cho một dãy số nguyên $A$ có $N$ phần tử bao gồm các số nguyên từ $1$ đến $N$, mỗi số xuất hiện đúng một lần. 

Một dãy con của $A$ là một dãy nhận được khi ta xóa một vài phần tử ở đầu hoặc cuối dãy $A$ (có thể là $0$).

Đếm số dãy con có độ dài **lẻ** của $A$ có trung vị là $B$. Trung vị của một dãy là phần tử ở chính giữa của dãy sau khi đã sắp xếp. Ví dụ, trung vị của dãy $\{5, 1, 3\}$ là 3.
####Input
 - Dòng đầu tiên chứa hai số nguyên $N$ $(1 \leq N \leq 100000)$ và $B$ $(1 \leq B \leq N)$.
 - Dòng thứ hai chứa $N$ số nguyên là phần tử của dãy $A$, các số cách nhau bởi một dấu cách.

####Output
- In ra số dãy con có độ dài lẻ của $A$ có trung vị là $B$.
!!! question "Test 1"
    ???+ "Input"
        ```sample
        5 4
        1 2 3 4 5 
        ```
    ???+ success "Output"
        ```sample
        2
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        6 3
        1 2 4 5 6 3 
        ```
    ???+ success "Output"
        ```sample
        1
        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        7 4
        5 7 2 4 3 1 6 
        ```
    ???+ success "Output"
        ```sample
        4
        ```
??? warning "Note"

    Trong test thứ 4, các dãy con thỏa mãn là $\{4\}, \{7, 2, 4\}, \{5, 7, 2, 4, 3\}$ và $\{5, 7, 2, 4, 3, 1, 6\}$