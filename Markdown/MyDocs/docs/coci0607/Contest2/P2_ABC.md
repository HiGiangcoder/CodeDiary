### ABC

Bạn sẽ được cung cấp ba số nguyên $A$, $B$ và $C$. Các số này không được cho theo đúng thứ tự, nhưng ta biết rằng $A$ nhỏ hơn $B$ và $B$ nhỏ hơn $C$.

Để dễ nhìn hơn, chúng ta cần sắp xếp chúng theo thứ tự đã cho.

#### Input  
- Dòng đầu tiên chứa ba số nguyên dương $A$, $B$ và $C$, không nhất thiết theo đúng thứ tự. Cả ba số đều không vượt quá $100$.
- Dòng thứ hai chứa ba chữ cái in hoa `'A'`, `'B'` và `'C'` (không có khoảng trắng) thể hiện thứ tự mong muốn.

#### Output  
- In ra ba số $A$, $B$, $C$ theo thứ tự mong muốn, cách nhau bởi một khoảng trắng.

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample  
        1 5 3  
        ABC  
        ```  
    ???+ success "Output"  
        ```sample  
        1 3 5  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample  
        6 4 2  
        CAB  
        ```  
    ???+ success "Output"  
        ```sample  
        6 2 4  
        ```  

