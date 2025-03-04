### MODULO

Cho hai số nguyên $A$ và $B$, $A\%B$ là số dư khi chia $A$ cho $B$. Ví dụ, các số $7, 14, 27$ và $38$ có số dư lần lượt là $1, 2, 0$ và $2$ khi chia cho $3$. Viết một chương trình nhận vào $10$ số nguyên và in ra số lượng số dư khác nhau khi chia cho $42$.  

#### Input 
- Gồm $10$ số nguyên không âm, mỗi số nhỏ hơn $1000$, mỗi số được nhập trên một dòng riêng.  

#### Output
- In ra một số nguyên duy nhất là số lượng số dư khác nhau khi chia cho $42$.  


#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        1  
        2  
        3  
        4  
        5  
        6  
        7  
        8  
        9  
        10  
        ```  
    ???+ "Output"  
        ```  
        10  
        ```  
    ??? warning "Note"  
        Các số dư có là: $1, 2, 3, 4, 5, 6, 7, 8, 9, 10$.  


!!! question "Test 2"  
    ???+ "Input"  
        ```  
        42  
        84  
        252  
        420  
        840  
        126  
        42  
        84  
        420  
        126  
        ```  
    ???+ "Output"  
        ```  
        1  
        ```  
    ??? warning "Note"  
        Tất cả các số đều chia hết cho $42$.


!!! question "Test 3"  
    ???+ "Input"  
        ```  
        39  
        40  
        41  
        42  
        43  
        44  
        82  
        83  
        84  
        85  
        ```  
    ???+ "Output"  
        ```  
        6  
        ```  
    ??? warning "Note"  
        Các số dư có là: $39, 40, 41, 0, 1, 2, 40, 41, 0, 1$. Có $6$ số khác nhau.  
