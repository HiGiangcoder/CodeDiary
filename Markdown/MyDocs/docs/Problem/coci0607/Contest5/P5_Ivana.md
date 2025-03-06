### Ivana
Mặc dù cô nàng Ivana đã thấy Zvonko trộm con chip vi xử lí của Mirko trong bài "Natrij", cô nàng - dưới cương vị của một người em gái - không hề nói cho Mirko biết điều đã xảy ra đơn giản vì nàng ta đã thích Zvonko mất tiu. Cô nàng đã yêu cầu một buổi đi xem phim với chàng ta như là điều kiện để nhắm mắt làm ngơ những điều mà cô ả đã chứng kiến.

Zvonko vốn không quan tâm đến nữ nhi bởi nếu yêu đương thì lấy đâu ra thời gian để tôi văn luyện toán? Vì vậy, chàng ta đã đưa ra một lời đề nghị rằng cả hai sẽ cùng chơi một trò chơi và nếu Ivana thắng, họ sẽ đi xem phim cùng nhau. Nàng ta thấy vậy liền gật đầu hớn hở do có tài nhảy dây và lâu lâu lấn sân sang túp cầu với hai người anh trai.

Zvonko đặt $N$ số nguyên dương thành một vòng tròn và bắt đầu giải thích các luật lệ:

- Người chơi trước sẽ bắt đầu chọn một số bất kì.
- Người chơi còn lại sau đó sẽ chọn một trong hai số ở bên cạnh số được người đi trước chọn.
- Sau đó lần lượt từng người chọn một số mà kề cạnh với bất kì số nào đã được chọn trước đó cho đến khi hết số trên sàn. Ai lấy được nhiều số lẻ hơn thì thắng.

Zvonko chơi tối ưu hết mức có thể; chàng ta luôn tìm kiếm một chiến thuật mà dẫn tới hoặc là thắng hoặc là hoà. Zvonko không biết Ivana chơi hay đến đâu. Dù vậy với cái tôi lớn, anh chàng của chúng ta đã nhường cho Ivana đi trước.

Nhưng Ivana chỉ quan tâm tới việc được ngồi kế bên chàng Zvonko trước màn hình lớn nên cô nàng tìm kiếm sự giúp đỡ khi chơi.

Viết một chương trình kiểm tra xem bao nhiêu nước đi đầu tiên khác nhau Ivana có thể đi để cô nàng có cơ hội chiến thắng về sau.

#### Input
- Dòng đầu tiên gồm số nguyên $N$ $(1 \le N \le 100)$ thể hiện số lượng số trong vòng tròn.
- Dòng thứ hai gồm $N$ số nguyên được ngăn cách nhau bởi một dấu khoảng trắng. Mỗi số nằm trong đoạn $[1, 1000]$. Không có hai số nào giống nhau.

#### Output
Số lượng nước đi đầu tiên khác nhau sao cho Ivana có thể chiến thắng về sau.

!!! question "Test 1"
    ???+ "Input"
        ```
        3
        3 1 5 
        ```
    ???+ success "Output"
        ```
        3
        ```
    ??? warning "Note"
        ```
        Dù chọn số nào để đi trước thì Ivana đều kết thúc ván với $2$ số lẻ trong tay và dành chiến thắng dễ dàng.
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        4
        1 2 3 4 
        ```
    ???+ success "Output"
        ```
        2
        ```
    ??? warning "Note"
        ```
        Nếu Ivana chọn một trong hai số chẵn, Zvonko chắc chắn sẽ chọn số lẻ và dẫn đến kết quả hoà. Ngược lại, nếu cô nàng chọn một trong hai số lẻ, Zvonko sẽ phải chọn một trong hai số chẵn, nàng ta chỉ cần chọn số lẻ còn lại và chiến thắng.
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        8
        4 10 5 2 9 8 1 7
        ```
    ???+ success "Output"
        ```
        5
        ```