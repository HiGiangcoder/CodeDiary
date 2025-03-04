### KAMEN

Domeniko đã phải nằm trên giường gần hai tuần nay vì bạn của cậu, Nedjeljko, vô tình thả một hòn đá lớn lên chân trái của cậu. Vì đã giải hết các bài từ kỳ thi quốc gia của Croatia từ năm 1998, Domeniko phải tìm một cách mới để giết thời gian.

Trò chơi mới của Domeniko được chơi trên một bảng có kích thước \( R \times C \). Ban đầu, mỗi ô vuông trên bảng hoặc là trống hoặc bị chặn bởi một bức tường. Domeniko ném một hòn đá vào bảng bằng cách đặt nó vào hàng trên cùng của một cột rồi để trọng lực làm phần còn lại.

Quy tắc của trọng lực như sau:

- Nếu ô vuông ngay bên dưới hòn đá là một bức tường hoặc hòn đá đang ở hàng dưới cùng của cột, hòn đá sẽ đứng yên.
- Nếu ô vuông bên dưới hòn đá trống, hòn đá sẽ rơi xuống ô đó.
- Nếu ô bên dưới hòn đá chứa một hòn đá khác, hòn đá đang rơi có thể trượt sang hai bên:
    - Nếu các ô bên trái và chéo xuống bên trái đều trống, hòn đá trượt sang trái một ô.
    - Nếu không thể trượt sang trái nhưng các ô bên phải và chéo xuống bên phải đều trống, hòn đá trượt sang phải một ô.
    - Nếu cả hai bên đều bị chặn, hòn đá sẽ đứng yên và không di chuyển nữa.

Domeniko sẽ không bao giờ ném một hòn đá mới cho đến khi hòn đá trước đó đã hoàn toàn dừng lại.

Hãy viết chương trình mô phỏng trạng thái của bảng sau khi Domeniko ném hết tất cả các hòn đá, biết rằng bạn được cung cấp thứ tự các cột mà Domeniko đã ném đá vào.

**Lưu ý:** Domeniko sẽ không bao giờ ném một hòn đá vào một cột có ô trên cùng không trống.

#### Input

- Dòng đầu tiên chứa hai số nguyên \( R \) và \( C \) \((1 \leq R \leq 30000, 1 \leq C \leq 30)\) — kích thước của bảng.
- Mỗi dòng trong số \( R \) dòng tiếp theo chứa \( C \) ký tự, thể hiện trạng thái ban đầu của bảng. Ký tự `.` biểu thị một ô trống, ký tự `X` biểu thị một bức tường.
- Dòng tiếp theo chứa một số nguyên \( N \) \((1 \leq N \leq 100000)\) — số lượng hòn đá Domeniko ném.
- \( N \) dòng tiếp theo, mỗi dòng chứa một số nguyên từ 1 đến \( C \), thể hiện cột Domeniko đã ném đá vào (cột bên trái nhất là cột 1).

**Ghi chú:** Trong 60% số test, \( R \) sẽ không vượt quá 30.

#### Output

In ra \( R \) dòng, mỗi dòng chứa \( C \) ký tự, thể hiện trạng thái cuối cùng của bảng. Ký tự `O` đại diện cho hòn đá.

#### Examples

!!! question "Test 1"
    ???+ "Input"
        ```
        5 4
        ....
        ....
        X...
        ....
        ....
        4
        1
        1
        1
        1
        ```
    ???+ "Output"
        ```
        ....
        O...
        X...
        ....
        OOO.
        ```
    ??? warning "Note"
        - Hòn đá đầu tiên rơi xuống và dừng lại ở trên bức tường.
        - Hòn đá thứ hai rơi trên hòn đá đầu tiên, trượt sang phải và rơi xuống đáy cột thứ hai.
        - Hòn đá thứ ba rơi trên hòn đá đầu tiên và hòn đá thứ hai, trượt sang trái và rơi xuống đáy cột đầu tiên.
        - Hòn đá thứ tư rơi trên hòn đá đầu tiên, hòn đá thứ hai, và cuối cùng trượt sang phải.
    

!!! question "Test 2"
    ???+ "Input"
        ```
        7 6
        ......
        ......
        ...XX.
        ......
        ......
        .XX...
        ......
        6
        1
        4
        4
        6
        4
        4
        ```
    ???+ "Output"
        ```
        ......
        ...O..
        ...XX.
        ......
        .OO...
        .XX...
        O..O.O
        ```
    
