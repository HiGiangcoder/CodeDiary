###PARKING
Sau khi bị đuổi học vì tạch môn Hóa, Luka đi làm tài xế xe tải. Một buổi tối, Luka đậu $3$ chiếc xe tại một bãi đỗ xe. Bãi đỗ xe này tính tiền theo một cách kì là - họ giảm giá theo số lượng xe.

Khi chỉ có một chiếc xe đậu ở đó, tài xế sẽ phải trả $A$ đồng cho $1$ phút. Khi có hai chiếc xe, mỗi tài xế sẽ phải trả $B$ đồng mỗi phút và khi có $3$ chiếc xe, mỗi tài xế sẽ phải trả $C$ đồng mỗi phút.

Cho biết ba số $A, B, C$ và khoảng thời gian mà ba chiếc xe Luka đã đậu, hãy tính số tiền cậu ấy phải trả.
####Input
 - Dòng đầu tiên chứa ba số nguyên $A, B, C$ ($1 \leq C \leq B \leq A \leq 100)$, số tiền phải trả như đã định nghĩa ở trên.
 - Ba dòng tiếp theo, mỗi dòng chứa $2$ số nguyên trong khoảng từ $1$ đến $100$, thể hiện thời gian đến và đi của những chiếc xe của Luka tính theo phút. Dữ liệu đảm bảo thời gian đến luôn sớm hơn thời gian đi.

####Output
 - In ra số tiền mà Luka phải trả.

!!! question "Test 1"
    ???+ "Input"
        ```sample
        5 3 1
        1 6
        3 5
        2 8 
        ```
    ???+ success "Output"
        ```sample
        33
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        10 8 6
        15 30
        25 50
        70 80 
        ```
    ???+ success "Output"
        ```sample
        480
        ```