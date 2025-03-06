###Ispiti

Làng của Mirko đang tổ chức một cuộc thi. Ai cũng muốn vượt qua kỳ thi với nỗ lực ít nhất có thể, nhưng điều đó không hề dễ dàng. Mirko nhận ra rằng cách tốt nhất là tìm một người giỏi hơn mình và học hỏi từ họ. Mọi người trong làng cũng làm theo, và bây giờ ai cũng đang tìm một người để học cùng.

Chúng ta có thể đánh giá xem một người đã chuẩn bị cho cuộc thi tốt đến mức nào bằng $2$ số nguyên $A$ và $B$. Số $A$ thể hiện độ hiểu biết của người đó về môn học và số $B$ thể hiện lượng kiến thức của người đó.

Là người đứng đầu của ngôi làng, Mirko ra luật rằng một người chỉ được nhờ một người khác giúp đỡ chỉ khi người đó có cả hai chỉ số lớn hơn hoặc bằng chỉ số của mình (không ai muốn hỏi một người hiểu biết kém hơn hoặc có ít kiến thức hơn mình).

Ngoài ra, mọi người sẽ ưu tiên chọn người có sự chênh lệch về lượng kiến thức $B$ nhỏ nhất so với mình, để tránh làm phiền những người quá giỏi. Nếu có nhiều lựa chọn thỏa mãn điều kiện này, họ sẽ tiếp tục ưu tiên người có sự chênh lệch về mức độ hiểu biết $A$ nhỏ nhất.

Gần đây, làng của Mirko ngày càng trở nên nổi tiếng và nhiều học sinh mới liên tục chuyển đến ngay trước kỳ thi. Vì không quen với các quy tắc của Mirko, họ bối rối và không biết phải nhờ ai giúp đỡ. Vì vậy, họ quyết định nhờ một lập trình viên ở làng kế bên giúp đỡ!

####Input
 - Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 200000)$, số lượng truy vấn.
 - N dòng tiếp theo, mỗi dòng có thể chứa:
     + "D A B": Một học sinh có độ hiểu biết là $A$ và lượng kiến thức là $B$ chuyển đến làng $(1 \leq A, B \leq 2.10^{9})$. Dữ liệu vào đảm bảo chỉ số $A$ và $B$ của mỗi học sinh là duy nhất.
     + "P i": Học sinh thứ $i$ chuyển vào muốn tìm một người để học cùng.
####Output
- Với mỗi truy vấn dạng "P i", in ra học sinh phù hợp để học cùng học sinh thứ $i$. Các học sinh được đánh số theo thứ tự di chuyển tới làng (bắt đầu từ 1). Nếu không có học sinh nào phù hợp, in ra "**NE**"
!!! question "Test 1"
    ???+ "Input"
        ```sample
        6
        D 3 1
        D 2 2
        D 1 3
        P 1
        P 2
        P 3 
        ```
    ???+ success "Output"
        ```sample
        NE
        NE
        NE
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        6
        D 8 8
        D 2 4
        D 5 6
        P 2
        D 6 2
        P 4 
        ```
    ???+ success "Output"
        ```sample
        3
        1
        ```
!!! question "Test 3"
    ???+ "Input"
        ```sample
        7
        D 5 2
        D 5 3
        P 1
        D 7 1
        D 8 7
        P 3
        P 2
        ```
    ???+ success "Output"
        ```sample
        2
        4
        4
        ```