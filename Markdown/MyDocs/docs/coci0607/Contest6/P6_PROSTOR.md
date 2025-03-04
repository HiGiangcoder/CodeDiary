### PROSTOR

Từ rất lâu trước đây, trong một không gian ba chiều xa xôi, có một bộ tộc các hình chữ nhật sống hạnh phúc. Những hình chữ nhật này sống trong hòa bình, luôn song song với một trong các mặt phẳng tọa độ.

Một ngày nọ, một hình hộp chữ nhật xuất hiện, cưỡi trên một khối 20 mặt (icosahedron), khoe những góc nhọn và thể tích dương của mình. Các hình chữ nhật nhìn chằm chằm trong sự kinh ngạc và bắt đầu mơ ước trở thành những hình hộp chữ nhật. Kể từ ngày hôm đó, mọi thứ không bao giờ còn như cũ. Các hình chữ nhật bắt đầu so sánh nhau về diện tích, chu vi và thậm chí cả tỷ lệ giữa các cạnh.

Cuối cùng, xung đột đầu tiên xảy ra về quyền sở hữu các điểm chung. Theo thời gian, mỗi cặp hình chữ nhật có ít nhất một điểm chung (bao gồm cả những hình chỉ chạm vào nhau) trở thành kẻ thù.

Nhiệm vụ của bạn là khôi phục hòa bình bằng cách xác định số lượng cặp hình chữ nhật đang có xung đột.

#### Input

- Dòng đầu tiên chứa một số nguyên \( N \) \((1 \leq N \leq 100000)\) — số lượng hình chữ nhật.
- \( N \) dòng tiếp theo, mỗi dòng chứa 6 số nguyên cách nhau bởi dấu cách. Ba số đầu tiên là tọa độ của một đỉnh của hình chữ nhật. Ba số còn lại là tọa độ của đỉnh đối diện.
- Các tọa độ là số nguyên trong khoảng từ 1 đến 999 (bao gồm cả 1 và 999).
- Mỗi hình chữ nhật song song với một trong các mặt phẳng tọa độ.


#### Output

- In ra một dòng duy nhất — tổng số cặp hình chữ nhật có xung đột.


#### Examples

!!! question "Test 1"
    ???+ "Input"
        ```
        3
        1 1 1 1 3 3
        1 3 3 1 6 6
        1 4 4 1 5 5
        ```
    ???+ "Output"
        ```
        2
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        3
        15 10 10 15 20 20
        10 15 10 20 15 20
        10 10 15 20 20 15
        ```
    ???+ "Output"
        ```
        3
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        5
        4 4 5 4 3 2
        5 3 2 4 3 1
        5 4 3 1 1 3
        1 4 3 1 5 4
        5 5 4 5 4 2
        ```
    ???+ "Output"
        ```
        4
        ```
