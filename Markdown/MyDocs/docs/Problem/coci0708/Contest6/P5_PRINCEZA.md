###PRINCEZA

Luka đỗ xe tải của mình gần một cái hồ. Hồ này có một con ếch tên là Barica sinh sống, nó nhảy qua $N$ cái cây trôi nổi trên mặt hồ. Biết được khá nhiều câu chuyện cổ tích, Luka hiểu rằng nếu anh ta hôn Barica, nó sẽ biến thành một nàng công chúa xinh đẹp. Tuy nhiên, trước tiên anh ta phải bắt được nó!

Giả sử nhìn từ trên cao xuống, vị trí của một cây trên mặt hồ có thể được xác định bằng một cặp tọa độ. Từ cây ở vị trí $(x, y)$, Barica có thể nhảy:

- Đến cây $(x+P, y+P)$, với $P$ là số nguyên dương bất kỳ. Hướng này gọi là hướng $A$.

- Đến cây $(x+P, y−P)$, với $P$ là số nguyên dương bất kỳ. Hướng này gọi là hướng $B$.

- Đến cây $(x−P, y+P)$, với $P là số nguyên dương bất kỳ. Hướng này gọi là hướng $C$.

- Đến cây $(x−P, y−P)$, với $P$ là số nguyên dương bất kỳ. Hướng này gọi là hướng $D$.

Barica chọn một trong bốn hướng trên và nhảy đến cây đầu tiên theo hướng đó. Nếu không có cây nào theo hướng đã chọn, Barica sẽ đứng yên. Sau khi Barica nhảy, cây mà nó vừa nhảy đi sẽ chìm xuống và biến mất.

Biết được vị trí của các cây và trình tự các hướng mà Barica chọn, Luka muốn xác định tọa độ của cây mà Barica sẽ dừng lại. Anh ta sẽ đợi ở đó, phục kích Barica và hôn nó.

Hãy viết một chương trình giải bài toán của Luka và giúp anh ta biến Barica thành một nàng công chúa xinh đẹp.

####Input
 - Dòng đầu tiên chứa hai số nguyên $N$ và $K$ $(1 \leq N, K \leq 100000)$, số lượng cây và số lần nhảy của Barica.
 - Dòng thứ hai chứa $K$ kí tự 'A', 'B', 'C' hoặc 'D'. Kí tự thứ $i$ thể hiện hướng của lần nhảy thứ $i$ của Barica.
 - $N$ dòng tiếp theo, mỗi dòng chứa hai số nguyên $X$ và $Y$ $(0 \leq X,Y \leq 1000000000)$, tọa độ của một cái cây. Ban đầu Barica ở cây đầu tiên.
####Output
 - In ra tọa độ cuối cùng của Barica.
!!! question "Test 1"
    ???+ "Input"
        ```sample
        7 5
        ACDBB
        5 6
        8 9
        4 13
        1 10
        7 4
        10 9
        3 7
        ```
    ???+ success "Output"
        ```sample
        7 4
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        6 12
        AAAAAABCCCDD
        1 1
        2 2
        3 3
        4 4
        5 3
        6 2  
        ```
    ???+ success "Output"
        ```sample
        5 3
        ```