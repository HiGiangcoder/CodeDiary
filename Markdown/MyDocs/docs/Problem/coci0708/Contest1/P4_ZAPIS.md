###ZAPIS
Một dãy ngoặc đúng là một dãy ngoặc chỉ chứa các dấu ngoặc đóng hoặc mở và thỏa mãn các điều kiện sau:
 - Một xâu rỗng là một dãy ngoặc đúng.
 - Nếu $A$ là một dãy ngoặc đúng thì $(A)$, $[A]$ và $\{A\}$ cũng là dãy ngoặc đúng.
 - Nếu $A$ và $B$ đều là dãy ngoặc đúng thì $AB$ cũng là dãy ngoặc đúng.
Ví dụ, các dãy ngoặc $[(\{\})]$, $[]()\{\}$ là dãy ngoặc đúng, nhưng các dãy $[(\{\{([$, $[](\{)\}$ và $[\{\}])([\{\}]$ thì không.

Ivica tìm thấy một xâu có vẻ là một dãy ngoặc đúng, một số kí tự trong xâu đã bị mờ và không thể đọc được.

Viết chương trình đếm xem có bao nhiêu cách thay thế các kí tự bị mờ trong xâu sao cho xâu đó là một dãy ngoặc đúng. Do kết quả có thể rất lớn, bạn chỉ cần in ra **5 chữ số cuối** của kết quả.
####Input
 - Dòng đầu tiên chứa một số nguyên chẵn $N$ $(2\leq N \leq 200)$, độ dài của xâu.
 - Dòng thứ hai chứa một dãy ngoặc, các kí tự bị mờ được thể hiện bởi dấu '?'.
####Output
 - In ra số cách thay thế các kí tự bị mờ để tạo thành dãy ngoặc đúng.
!!! question "Test 1"
    ???+ "Input"
        ```sample
        6
        ()()()
        ```
    ???+ success "Output"
        ```sample
        1
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        10
        (?([?)]?}? 
        ```
    ???+ success "Output"
        ```sample
        3
        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        16
        ???[???????]????
        ```
    ???+ success "Output"
        ```sample
        92202
        ```
??? warning "Note"

    Đối với test thứ 2, ba dãy ngoặc đúng có thể là $(\{([()])\})$, $()([()]\{\})$ và $([([])]\{\})$.