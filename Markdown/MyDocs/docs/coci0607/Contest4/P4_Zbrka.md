###Zbrka
Cho một dãy có $N$ phần tử, mỗi phần tử nằm trong khoảng từ 1 đến $N$ và xuất hiện duy nhất một lần.

Một cặp số trong dãy được coi là **gây lú** nếu số nằm ở phía trước lớn hơn số nằm ở phía sau. Độ lú của một dãy là số lượng các cặp gây lú có trong dãy đó. Ví dụ, độ lú của dãy $(1, 4, 3, 2)$ là $3$ vì trong dãy có 3 cặp gây lú: $(4, 3)$, $(4, 2)$ và $(3, 2)$.

Viết chương trình đếm số lượng dãy độ dài $N$ có độ lú bằng $C$.

#### Input
- Dòng đầu tiên chứa hai số nguyên $N$ và $C$.
#### Output
- In ra số dãy độ dài $N$ có độ lú bằng $C$, modulo $1000000007$



!!! question "Test 1"
    ???+ "Input"
        ```sample
        10 1
        ```
    ???+ success "Output"
        ```sample
        9
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        4 3

        ```
    ???+ success "Output"
        ```sample
        6

        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        9 13

        ```
    ???+ success "Output"
        ```sample
        17957

        ```