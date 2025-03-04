### Liga
Trong khi các cầu thủ đang nghỉ giữa các set, đài truyền hình phát những quảng cáo tẻ nhạt. Zvonko bật tính năng teletext trên TV của mình và xem qua các tỷ số và bảng xếp hạng mới nhất của giải bóng đá. Là một người nhạy bén, anh ta nảy ra ý tưởng cho một trò chơi toán học hoàn toàn mới.

Bảng xếp hạng bao gồm năm thông số cho mỗi đội: Tổng số trận thi đấu, số trận thắng, hoà và thua, và số điểm kiếm được. Một đội có thể kiếm được $3$ điểm cho mỗi trận thắng và $1$ điểm cho mỗi trận hoà.

Zvonko nhận thấy rằng giá trị ở một vài thông số có thể được xác định dựa trên các thông số khác.

Viết một chương trình với đầu vào là một bảng xếp hạng trong đó một số giá trị ở một vài thông số đang không được xác định và xác định các giá trị đó.

Dữ liệu từ các đội khác nhau không liên quan tới nhau. Ví dụ, có thể có bảng xếp hạng mà tất cả các đội đều thắng trận đấu mà họ thi đấu (mặc dù không thể xảy ra ở các giải đấu thật).

Mỗi đội thi đấu tối đa $100$ trận (dù cho đó có thể là một trong các thông số bị mất).

#### Input
- Dòng đầu tiên gồm số nguyên $N$ $(1 \le N \le 1000)$ cho biết số lượng đội thi đấu trong giải bóng.

- Mỗi dòng trong $N$ dòng tiếp theo gồm $5$ thông số cho mỗi team được phân biệt bằng các dấu khoảng trắng (thứ tự các thông số như trên đề bài). Mỗi thông số là một số nguyên không âm hoặc là kí tự '?' nếu như giá trị ở đó không được cho biết.

- Mỗi đầu vào đều thoả mãn các điều kiện đưa ra và tồn tại một đáp án duy nhất để xác định các giá trị trong các thông số bị mất.

#### Output
- In ra bảng với đầy đủ các thông số.

#### Note
- Với mỗi trường hợp, chương trình của bạn sẽ được nhận số điểm tương ứng với số đội bóng được xác định các thông số một cách chính xác, làm tròn xuống. Nếu chương trình chạy quá thời gian hoặc có lỗi khác xảy ra, điểm của bạn ứng với trường hợp đó sẽ là $0$.

!!! question "Test 1"
    ???+ "Input"
        ```
        5
        27 21 3 3 66
        27 18 6 3 ?
        ? 15 5 7 50
        ? 14 7 5 ?
        ? 14 ? 8 47 
        ```
    ???+ success "Output"
        ```
        27 21 3 3 66
        27 18 6 3 60
        27 15 5 7 50
        26 14 7 5 49
        27 14 5 8 47 
        ```