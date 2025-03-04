### V

Zvonko lại đang chơi với các chữ số, mặc dù mẹ cậu đã cảnh báo rằng cậu làm toán quá nhiều và nên ra ngoài chơi với bạn bè.

Trong trò chơi mới nhất của mình, Zvonko tìm các bội của một số nguyên \( X \), chỉ bao gồm các chữ số cho trước. Một bội của \( X \) là một số chia hết cho \( X \).

Để phá hỏng niềm vui của Zvonko, mẹ cậu quyết định viết một chương trình giải bài toán này. Hãy viết một chương trình tính có bao nhiêu bội của \( X \) nằm giữa \( A \) và \( B \) (bao gồm cả \( A \) và \( B \)), sao cho khi viết ở hệ thập phân, chúng chỉ chứa các chữ số được phép.

#### Input

- Dòng đầu tiên chứa ba số nguyên \( X, A, B \) \((1 \leq X < 10^{11}, 1 \leq A \leq B < 10^{11})\).
- Dòng thứ hai chứa các chữ số được phép. Các chữ số này được cho theo thứ tự tăng dần, không có khoảng trắng và không trùng lặp.

#### Output

In ra một dòng duy nhất — số lượng bội của \( X \) thỏa mãn yêu cầu.

#### Examples

!!! question "Test 1"
    ???+ "Input"
        ```
        2 1 20
        0123456789
        ```
    ???+ "Output"
        ```
        10
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        6 100 9294
        23689
        ```
    ???+ "Output"
        ```
        111
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        5 4395 9999999999
        12346789
        ```
    ???+ "Output"
        ```
        0
        ```
