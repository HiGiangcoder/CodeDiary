### BOND  

Mọi người đều biết điệp viên bí mật 007, Bond (James Bond). Tuy nhiên, ít ai biết rằng thực tế anh ấy không tự thực hiện hầu hết các nhiệm vụ của mình; thay vào đó, những nhiệm vụ đó được thực hiện bởi các người anh em họ của anh ấy, Jimmy Bonds. Bond (James Bond) đã mệt mỏi với việc phải tự phân công nhiệm vụ cho Jimmy Bonds mỗi khi có nhiệm vụ mới, vì vậy anh ấy đã nhờ bạn giúp đỡ.  

Mỗi tháng, Bond (James Bond) nhận được một danh sách các nhiệm vụ. Dựa trên kinh nghiệm từ các nhiệm vụ trước đó, anh ấy tính toán xác suất thành công của từng nhiệm vụ khi mỗi Jimmy Bond thực hiện. Nhiệm vụ của bạn là xử lý dữ liệu này và tìm ra cách phân công nhiệm vụ sao cho xác suất tất cả nhiệm vụ được hoàn thành thành công là cao nhất.  

Lưu ý: Xác suất để tất cả nhiệm vụ được hoàn thành thành công là tích của xác suất hoàn thành từng nhiệm vụ riêng lẻ.  

#### Input  
- Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 20)$, số lượng Jimmy Bonds và số nhiệm vụ.  
- $N$ dòng tiếp theo, mỗi dòng chứa $N$ số nguyên từ $0$ đến $100$, số thứ $j$ trong dòng thứ $i$ là xác suất (tính theo phần trăm) để Jimmy Bond thứ $i$ hoàn thành nhiệm vụ thứ $j$.  

#### Output  
- In ra xác suất tối đa để tất cả các nhiệm vụ được hoàn thành thành công, tính theo phần trăm.  
- Kết quả phải có độ chính xác trong khoảng sai số ±$0.000001$.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        2  
        100 100  
        50 50  
        ```  
    ???+ "Output"  
        ```  
        50.000000  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        2  
        0 50  
        50 0  
        ```  
    ???+ "Output"  
        ```  
        25.000000  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        3  
        25 60 100  
        13 0 50  
        12 70 90  
        ```  
    ???+ "Output"  
        ```  
        9.100000  
        ```  
    ??? warning "Note"  
        Nếu Jimmy Bond 1 thực hiện nhiệm vụ thứ 3, Jimmy Bond 2 thực hiện nhiệm vụ thứ 1 và Jimmy Bond 3 thực hiện nhiệm vụ thứ 2, xác suất thành công là: $1.0 \times 0.13 \times 0.7 = 0.091 = 9.1\%$ 
        Tất cả các cách sắp xếp khác đều cho xác suất thành công nhỏ hơn.  
