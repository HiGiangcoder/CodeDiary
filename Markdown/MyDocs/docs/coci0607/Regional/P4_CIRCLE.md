### CIRCLE

Một ngày hè đẹp trời, khi Mirko đang uống nước chanh trong phòng...  

"Anh trai!", Stanko hét lên.  

"Đôi khi anh tự hỏi ai mới là anh lớn hơn giữa hai chúng ta. Có chuyện gì thế?", Mirko hỏi.  

"Nghe kỹ này! Ở sân sau, em có $N$ viên sỏi được sắp xếp thành một vòng tròn. Một số viên sỏi màu đen, một số viên màu trắng. Em sẽ thực hiện điều sau: giữa hai viên sỏi liền kề cùng màu, em chèn một viên sỏi đen, còn giữa hai viên sỏi liền kề khác màu, em chèn một viên sỏi trắng. Lúc này, số viên sỏi sẽ tăng gấp đôi thành $2N$. Sau đó, em loại bỏ $N$ viên sỏi ban đầu, chỉ giữ lại $N$ viên sỏi mới thêm vào. Em sẽ làm điều này đúng $K$ lần. Và anh phải xác định vòng tròn ban đầu của em."**, Stanko giải thích.  

"Ha! Anh sẽ không bị lừa dễ dàng đâu! Anh nhận ra rằng không phải lúc nào cũng có thể biết chính xác vòng tròn ban đầu, nhưng anh có thể đếm số lượng vòng tròn ban đầu khác nhau có thể tạo ra cùng một kết quả sau đúng $K$ lần biến đổi như vòng tròn của em.", Mirko trả lời.  

Bạn được cung cấp cấu hình của vòng tròn trước khi Stanko thực hiện biến đổi $K$ lần.  
Viết chương trình xác định số lượng vòng tròn ban đầu khác nhau có thể tạo ra cùng một kết quả sau $K$ biến đổi.  

Hai cấu hình sỏi được coi là giống nhau nếu có thể xoay vòng này thành vòng kia. Ví dụ, **BBW** và **BWB** được coi là giống nhau, nhưng **BBWWBW** và **WWBBWB** thì không.  

#### Input  
- Dòng đầu tiên chứa hai số nguyên **$N$** và **$K$** ($3 \leq N \leq 100$, $1 \leq K \leq 10$), tương ứng là số lượng viên sỏi trong vòng tròn và số lần biến đổi của Stanko.  
- Dòng thứ hai chứa đúng $N$ ký tự **'B'** hoặc **'W'**, đại diện cho vòng tròn sỏi ban đầu của Stanko.  

#### Output  
- In ra một số nguyên duy nhất: số lượng vòng tròn ban đầu khác nhau có thể tạo ra cùng một vòng tròn sau **$K$** lần biến đổi.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        3 1
        BBW
        ```  
    ???+ success "Output"  
        ```sample
        2
        ```  
    ??? warning "Note"  
        Hai vòng tròn ban đầu **BBW** và **WBW** đều trở thành **BWW** sau một lần biến đổi.  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        6 2
        WBWWBW
        ```  
    ???+ success "Output"  
        ```sample
        3
        ```  

