### SLIKAR  

Hoàng đế độc ác Cactus sở hữu Thùng Bia Ma Thuật và đã làm ngập rừng Enchanted! Họa sĩ và ba chú nhím nhỏ phải nhanh chóng trở về hang của Hải ly để tránh nước lũ!  

Bản đồ của rừng Enchanted gồm $R$ hàng và $C$ cột. Các ô trống được ký hiệu bằng ký tự `.`, các ô bị ngập nước ký hiệu là `*`, và các tảng đá được ký hiệu là `X`. Ngoài ra, hang của Hải ly được ký hiệu là `D` và Họa sĩ cùng ba chú nhím nhỏ được biểu diễn bằng `S`.  

Mỗi phút, Họa sĩ và ba chú nhím nhỏ có thể di chuyển đến một trong bốn ô lân cận (lên, xuống, trái hoặc phải). Đồng thời, nước lũ cũng lan rộng, làm cho tất cả các ô trống có ít nhất một cạnh chung với ô bị ngập nước sẽ bị ngập theo.  

Cả nước lũ lẫn nhóm Họa sĩ không thể đi vào ô có đá. Đặc biệt, nhóm Họa sĩ không thể đi vào các ô đã bị ngập nước, và nước lũ cũng không thể tràn vào hang của Hải ly.  

Viết một chương trình nhận vào bản đồ của rừng Enchanted và in ra thời gian ngắn nhất để nhóm Họa sĩ đến được hang của Hải ly một cách an toàn.  

Lưu ý: Nhóm Họa sĩ không thể di chuyển vào ô sẽ bị ngập nước trong cùng một phút.  

#### Input  
- Dòng đầu tiên chứa hai số nguyên $R$ và $C$ $(R, C \leq 50)$.  
- $R$ dòng tiếp theo, mỗi dòng chứa $C$ ký tự thuộc tập `{., *, X, D, S}`.  
- Bản đồ luôn chứa đúng một ký tự `D` và một ký tự `S`.  

#### Output  
- In ra thời gian ngắn nhất để nhóm Họa sĩ đến được hang của Hải ly.  
- Nếu không thể đến được, in ra `KAKTUS`.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        3 3  
        D.*  
        ...  
        .S.  
        ```  
    ???+ "Output"  
        ```  
        3  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        3 3  
        D.*  
        ...  
        ..S  
        ```  
    ???+ "Output"  
        ```  
        KAKTUS  
        ```  
    ??? warning "Note"  
        Nhóm Họa sĩ có thể đi dọc theo biên dưới và sau đó là biên trái, nhưng sẽ bị nước lũ nhấn chìm một phút trước khi đến nơi.  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        3 6  
        D...*.  
        .X.X..  
        ....S.  
        ```  
    ???+ "Output"  
        ```  
        6  
        ```  
