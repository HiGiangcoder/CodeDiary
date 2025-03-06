### MARATON  

Albert, Barbara, Casper, Dinko, và Eustahije đang chơi một trận cờ caro marathon trên bàn cờ kích thước $N \times N$.  

Ban đầu, tất cả các ô trên bàn cờ đều trống, và các người chơi lần lượt viết chữ cái đầu tiên trong tên của họ vào bất kỳ ô trống nào (do đây là những người chơi đẳng cấp, không ai có cùng chữ cái đầu tiên).  

Trò chơi kết thúc khi một người chơi đặt được 3 chữ cái liên tiếp theo hàng, cột hoặc đường chéo. Người đó sẽ chiến thắng.  

Viết chương trình kiểm tra trạng thái của bàn cờ và xác định ai là người chiến thắng, hoặc thông báo nếu trò chơi vẫn đang diễn ra.  

#### Input  
- Dòng đầu tiên chứa số nguyên $N$ $(1 \leq N \leq 30)$, kích thước của bàn cờ.  
- $N$ dòng tiếp theo chứa $N$ ký tự là chữ cái in hoa hoặc `.` (ô trống).  
- Dữ liệu đảm bảo có tối đa một người chiến thắng.  

#### Output  
- Nếu có người thắng, in ra chữ cái đầu tiên trong tên của họ.  
- Nếu không có người chiến thắng, in ra `ongoing`.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        3  
        XOC  
        XOC  
        X..  
        ```  
    ???+ "Output"  
        ```  
        X  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        4  
        ....  
        ..A.  
        AAB.  
        .B.B  
        ```  
    ???+ "Output"  
        ```  
        ongoing  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        3  
        ABB  
        AAA  
        BBA  
        ```  
    ???+ "Output"  
        ```  
        A  
        ```  
