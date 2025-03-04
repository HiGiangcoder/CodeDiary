### STOL

Mirko vừa mua một căn hộ và muốn mời càng nhiều người càng tốt đến ăn tối để cùng chúc mừng. Để làm được điều này, anh ấy cần một chiếc bàn gỗ hình chữ nhật lớn để có thể ngồi cùng khách mời.

Số người có thể ngồi quanh bàn bằng chu vi của nó (tổng độ dài của cả bốn cạnh). Mirko muốn mua một chiếc bàn sao cho nó có thể đặt vừa trong căn hộ và có thể mời được nhiều người nhất có thể. Bàn phải được đặt sao cho các cạnh của nó song song với các cạnh của căn hộ.

Dựa trên bố cục của căn hộ, hãy tìm số người tối đa mà Mirko có thể mời đến ăn tối.

#### Input  
- Dòng đầu tiên chứa hai số nguyên $R$ và $C$ ($1 \leq R, C \leq 400$), là kích thước của căn hộ.
- Mỗi trong $R$ dòng tiếp theo chứa đúng $C$ ký tự (không có khoảng trắng), mỗi ô có thể là ô trống (`.`) hoặc bị chặn (`X`).
- Mirko chỉ có thể đặt bàn trên các ô trống.

#### Output  
- In ra số khách tối đa mà Mirko có thể mời đến ăn tối sau khi mua bàn trên một dòng duy nhất.

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample  
        2 2  
        ..  
        ..  
        ```  
    ???+ success "Output"  
        ```sample  
        7  
        ```  
    ??? warning "Note"
        Lưu ý rằng Mirko chỉ có thể mời $7$ người vì trong số người ngồi vào bàn có cả anh ấy.

!!! question "Test 2"  
    ???+ "Input"  
        ```sample  
        4 4  
        X.XX  
        X..X  
        ..X.  
        ..XX  
        ```  
    ???+ success "Output"  
        ```sample  
        9  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```sample  
        3 3  
        X.X  
        .X.  
        X.X  
        ```  
    ???+ success "Output"  
        ```sample  
        3  
        ```  

