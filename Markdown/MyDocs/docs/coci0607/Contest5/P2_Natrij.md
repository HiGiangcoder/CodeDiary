### Natrij
Sau thất bại trong việc đoạt lấy quyền lực trong yên bình, Borko đã quyết định sẽ phá huỷ đình làng của Mirko - được xây dựng cho anh ta bằng những tấm bìa cứng bởi vô số bầy tôi trung thành.

Để làm được điều đó, Borko sẽ sử dụng một con chip vi xử lí của Mirko (được trộm bởi một người bạn của Borko - Zvonko), một xô nước và một túi Natri (Sodium). Anh ta sẽ thời gian hẹn của "vụ nổ" vào trong con chip vi xử lí, và thả Natri (Sodium) vào trong nước sau khi bộ đếm về $0$.

Borko biết thời điểm hiện tại là mấy giờ và thời điểm anh ta muốn vụ nổ xảy ra. Là một người không yêu thích số học cho lắm và tên Zvonko thì đang đi chơi với mấy hòn bi ở sân sau rồi nên cũng chẳng giúp ích được gì, do đó, anh ta muốn nhờ bạn viết một chương trình để tính toán thời gian đến lúc xảy ra vụ nổ (là thời gian đếm ngược mà Borko sẽ nhập vào con chip) biết rằng thời gian tối thiểu là $1$ giây và tối đa là $24$ giờ.

#### Input
- Dòng đầu tiên bao gồm thời gian hiện tại viết dưới định dạng $hh:mm:ss$ (giờ, phút, giây). Đảm bảo rằng giờ sẽ nằm trong khoảng từ $0$ đến $23$ và phút sẽ nằm trong khoảng từ $0$ đến $59$.
- Dòng thứ hai là thời gian xảy ra vụ nổ, có cùng với định dạng như trên.

#### Output
- Gồm một dòng là thời gian đếm ngược đến khi vụ nổ xảy ra, có cùng với định dạng như đầu vào.

!!! question "Test 1"
    ???+ "Input"
        ```
        20:00:00
        04:00:00
        ```
    ???+ success "Output"
        ```
        08:00:00
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        12:34:56
        14:36:22 
        ```
    ???+ success "Output"
        ```
        02:01:26
        ```