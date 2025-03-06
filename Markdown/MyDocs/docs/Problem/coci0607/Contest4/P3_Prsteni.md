###Prsteni

Sau một buổi sáng mệt mỏi, Mirko đã đi ngủ. Tuy nhiên, Stanko, em của cậu lại vừa thức dậy và bắt đầu kiếm thứ gì đó để chơi. Stanko tìm thấy $N$ chiến nhẫn với kích cỡ khác nhau trong garage và xếp chúng sao cho mỗi chiếc nhẫn đều tiếp xúc với hai chiếc nhẫn nằm trước và sau nó (Trừ chiếc nhẫn đầu tiên và cuối cùng chỉ tiếp xúc với một chiếc nhẫn kế bên). 

Cậu ấy xoay chiếc nhẫn đầu tiên và thấy rằng những chiếc nhẫn khác cũng xoay theo với tốc độ khác nhau. Cảm thấy thích thú với phát hiện này, Stanko đã đếm xem những chiếc nhẫn khác xoay được bao nhiêu vòng nếu cậu ấy xoay chiếc nhẫn đầu tiên một vòng. Tuy nhiên, cậu ấy bỏ cuộc khi nhận ra số vòng những chiếc nhẫn xoay được có thể không phải số nguyên và cậu ấy không biết làm thế nào cả! 

Hãy viết một chương trình giúp Stanko đếm số vòng những chiếc nhẫn khác xoay được khi chiếc nhẫn đầu tiên được xoay một vòng.

#### Input
 - Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 100)$, số nhẫn mà Stanko tìm được.
 - Dòng tiếp theo chứa $N$ số nguyên $a_i$ $(1 \leq a_i \leq 1000)$ là bán kính của chiếc nhẫn thứ $i$.

#### Output
 - In ra $N - 1$ dòng, dòng thứ $i$ là số vòng mà chiếc nhẫn thứ $i + 1$ xoay được khi chiếc nhẫn đầu tiên xoay 1 vòng, biểu diễn dưới dạng phân số tối giản $A/B$.

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample  
        3
        8 4 2  
        ```  
    ???+ success "Output"  
        ```sample  
        2/1
        4/1   
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample  
        4
        12 3 8 4   
        ```  
    ???+ success "Output"  
        ```sample  
        4/1
        3/2
        3/1
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```sample  
        4
        300 1 1 300
        ```  
    ???+ success "Output"  
        ```sample  
        300/1
        300/1
        1/1 
        ```  
