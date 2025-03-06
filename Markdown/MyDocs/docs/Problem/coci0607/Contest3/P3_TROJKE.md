### TROJKE

Mirko và Slavko đang chơi một trò chơi mới có tên là "Trojke" (Bộ ba). Đầu tiên, họ dùng phấn để vẽ một lưới $n \times n$ ô vuông trên mặt đường. Sau đó họ viết các chữ cái vào mỗi ô vuông đó. Đảm bảo rằng không có chữ cái nào được viết nhiều hơn một lần trong lưới.

Trò chơi yêu cầu tìm ba ký tự nằm trên cùng một đường thẳng nhanh nhất có thể. Ba ký tự được coi là nằm trên một đường thẳng nếu như có một đường thẳng đi qua chính giữa tâm của từng ô vuông chứa chứa chúng.

Sau một khoảng thời gian, việc tìm ra bộ ba mới trở nên khó khăn hơn. Mirko và Slavko cần một chương trình để đếm tất cả các bộ ba có thể có để biết liệu họ đã tìm thấy hết hay chưa.


#### Input:
- Dòng đầu tiên chứa một số nguyên $n$ $(3 \le n \le 100)$ là kích thước của lưới.
- Mỗi dòng trong $n$ dòng tiếp theo chứa $n$ ký tự mô tả lưới gồm các ký tự in hoa và ký tự '.' (mô tả ô vuông trống).


#### Output:
- Đầu ra là một dòng duy nhất mô tả số lượng bộ ba của lưới.


#### Example:

!!! question "Test 1"
    ???+ "Input"
        ```
        4
        ...D
        ..C.
        .B..
        A...
        ```
    ???+ "Output"
        ```
        4
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        5
        ..T..
        A....
        .FE.R
        ....X
        S....
        ```
    ???+ "Output"
        ```
        3
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        10
        ....AB....
        ..C....D..
        .E......F.
        ...G..H...
        I........J
        K........L
        ...M..N...
        .O......P.
        ..Q....R..
        ....ST....
        ```
    ???+ "Output"
        ```
        0
        ```