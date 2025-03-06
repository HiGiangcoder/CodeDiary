### Tenis
Sau khi kế hoạch B để chiếm quyền kiểm soát ngôi làng của Borko thất bại (bởi vì anh em của Mirko - Stanko - uống sạch chỗ nước), Zvonko trẻ tuổi quyết định thư giãn một số môn thể thao. Vì vậy anh ta đã dự trữ nước ép cà rốt và đậu phộng, và lao thẳng lên chiếc ghế đi văng, sẵn sàng để theo dõi trận tennis tiếp theo trên màn ảnh nhỏ.

Trong lúc hai tuyển thủ đang khởi động, thông số của cả hai hiện lên trên màn hình. Zvonko để ý thấy lịch sử đấu của người chơi có một số kết quả không hợp lệ. Anh ta nảy ra một ý tưởng siêu cấp vũ trụ bằng cách nhờ bạn viết một chương trình máy tính có khả năng kiểm tra độ hợp lệ của kết quả, sau đó anh ta sẽ bán chúng cho những người quản lý sổ sách và tận hưởng cuộc sống vinh hoa.

Một trận tennis bao gồm nhiều set, mỗi set gồm nhiều ván. Luật chơi như sau:

- Một người chơi thắng một set nếu anh ta thằng hơn $6$ ván và dẫn trước đối thủ ít nhất $2$ ván.
- Thêm nữa, nếu kết quả là $6:6$ trong set đầu hoặc set thứ hai, một ván quyết định sẽ được đưa ra xác định xem ai là người chiến thắng của cả set (ván tie-break).
- Trận đấu kết thúc khi một trong hai tuyển thủ thắng được $2$ set, và người đó sẽ là người chiến thắng.

Kết quả của một trận đấu được gọi là hợp lệ nếu như trận đấu đó được chơi theo luật và kết thúc đúng luật.

Hơn nữa, nếu có một tuyển thủ tên là Roger Federer (được chỉ định là "federer" trong đầu vào) thì nếu kết quả có một set mà anh ta thua thì là không hợp lệ. Mỗi trận đấu sẽ có khoảng từ $1$ đến $5$ set.

Hãy viết chương trình để kiểm tra độ hợp lệ  của tất cả trận đấu giữa hai tuyển thủ

#### Input
- Dòng đầu tiên gồm tên của hai tuyển thủ được ngăn cách bởi dấu khoảng trắng. Cả hai cái tên đều chứa các chữ cái in thường và có độ dài tối đa $20$. Các cái tên sẽ khác nhau.
- Dòng thứ hai gồm một số nguyên $N$ $(1 \le N \le 50)$, mô tả số trận mà hai tuyển thủ đã thi đấu.
- Mỗi dòng trong $N$ dòng tiếp theo chứa kết quả của một trận đấu, bao gồm kết quả của một số set được ngăn cách bởi dấu khoảng trắng. Mỗi trận đấu sẽ gồm $1$ đến $5$ set.
- Một set được cho dưới định dạng "A:B", với A và B là số ván thắng bởi mỗi người chơi, các con số này sẽ nằm trong khoảng $[0, 99]$.

#### Output
Với mỗi trận đấu theo thứ tự được nhập vào, in ra "da" nếu kết quả hợp lệ, hoặc "ne" nếu không hợp lệ.


!!! question "Test 1"
    ???+ "Input"
        ```
        sampras agassi
        6
        6:2 6:4
        3:6 7:5 2:6
        6:5 7:4
        7:6 7:6
        6:2 3:6
        6:2 1:6 6:8 
        ```
    ???+ success "Output"
        ```
        da
        da
        ne
        da
        ne
        da
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        federer roddick
        1
        2:6 4:6 
        ```
    ???+ success "Output"
        ```
        ne
        ```