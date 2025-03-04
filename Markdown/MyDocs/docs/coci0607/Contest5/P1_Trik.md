### Trik
Ghen tị với vị trí trưởng làng của Mirko, Borko chạy thẳng vào lều và cố gắng chứng tỏ Mirko không phù hợp để làm một chỉ huy.

Borko đặt $3$ chiếc cốc nhựa lên bàn, được đặt thẳng hàng và úp xuống, đồng thời một quả bóng nhỏ được đặt bên dưới chiếc cốc trái nhất. Sau đó anh ta đổi chỗ hai chiếc cốc bằng $1$ trong $3$ cách (như hình vẽ dưới) một số lần tuỳ ý. Mirko phải chỉ ra xem quả bóng nằm dưới chiếc cốc nào sau khi Borko hoàn thành việc đổi chỗ.

![image alt](https://imgur.com/ehjtTO6)

Mirko thông minh khoanh tay mỉm cười trong khi Borko thì khó khăn hơn để di chuyển các chiếc cốc càng nhanh càng tốt. Nhưng anh ta đâu ngờ được rằng một lập trình viên ở đằng sau đã ghi lại tất cả các bước di chuyển và sử dụng một chương trình để xác định xem quả bóng ở đâu. Hãy viết chương trình đó.

#### Input
Gồm một dòng chứa xâu kí tự độ dài không quá $50$ thể hiện các bước di chuyển của Borko ('A', 'B' hoặc 'C' như hình vẽ bên trên và không chứa dấu nháy đơn).

#### Output
In ra chỉ số của chiếc cốc chứa quả bóng trong đó, theo quy tắc: $1$ là chiếc cốc bên trái, $2$ là chiếc cốc ở giữa và $3$ là chiếc cốc bên phải.

!!! question "Test 1"
    ???+ "Input"
        ```
        AB
        ```
    ???+ success "Output"
        ```
        3
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        CBABCACCC
        ```
    ???+ success "Output"
        ```
        1
        ```