### POKLON

Mirko nhận được một tập hợp các khoảng làm quà sinh nhật. Có rất nhiều trò chơi mà cậu có thể chơi với chúng. Trong một trò chơi, Mirko phải tìm dãy dài nhất gồm các khoảng **phân biệt** sao cho:  

1. Mỗi khoảng trong dãy thuộc tập đã cho.  
2. Mỗi khoảng chứa hoàn toàn khoảng đứng sau nó trong dãy.  

Viết chương trình tìm một dãy thỏa mãn điều kiện trên có độ dài lớn nhất.  

#### Input  
- Dòng đầu tiên chứa số nguyên $N$ $(1 \leq N \leq 100000)$, số lượng khoảng trong tập hợp.  
- Mỗi dòng trong $N$ dòng tiếp theo chứa hai số nguyên $A$ và $B$ $(1 \leq A < B \leq 1000000)$ mô tả một khoảng.  

#### Output  
- Dòng đầu tiên in ra số nguyên $K$, độ dài của dãy dài nhất.  
- $K$ dòng tiếp theo, mỗi dòng chứa một khoảng thuộc dãy theo đúng định dạng đầu vào.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        3
        3 4
        2 5
        1 6
        ```  
    ???+ success "Output"  
        ```sample
        3
        1 6
        2 5
        3 4
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        5
        10 30
        20 40
        30 50
        10 60
        30 40
        ```  
    ???+ success "Output"  
        ```sample
        3
        10 60
        30 50
        30 40
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```sample
        6
        1 4
        1 5
        1 6
        1 7
        2 5
        3 5
        ```  
    ???+ success "Output"  
        ```sample
        5
        1 7
        1 6
        1 5
        2 5
        3 5
        ```  
