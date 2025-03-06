### KOCKE

Một con robot và năm khối lập phương được đặt trên một bàn cờ vô hạn gồm các ô vuông đơn vị. Robot và các khối lập phương mỗi cái chiếm một ô.

Robot có thể di chuyển theo bốn hướng: lên, xuống, trái và phải. Nếu ô mà robot sẽ di chuyển vào chứa một khối lập phương, robot sẽ đẩy nó theo hướng di chuyển.

Các khối lập phương có tính chất từ tính đặc biệt. Khi hai khối lập phương ở ô liền kề (các ô có chung một cạnh), chúng sẽ kết hợp và trở thành một đối tượng duy nhất. Nếu robot đẩy một khối lập phương đã kết hợp với một hoặc nhiều khối khác, tất cả các khối trong nhóm sẽ di chuyển cùng nhau.

Viết một chương trình điều khiển robot sao cho nó ghép tất cả các khối lập phương thành một nhóm duy nhất có hình chữ T ở vị trí thẳng đứng (không được xoay).

#### Input
- Đầu vào gồm năm dòng. Mỗi dòng chứa hai số nguyên $X$ và $Y$ $(5 \leq X, Y \leq 5)$, tọa độ ban đầu của một khối lập phương.
- Robot ban đầu ở ô $(0, 0)$. Không có khối lập phương nào ở tọa độ đó.
- Không có cặp khối lập phương nào ban đầu ở cùng một tọa độ hoặc ở các ô liền kề (có thể chạm góc).

#### Output
- In ra một chuỗi ký tự thể hiện các bước di chuyển của robot trên một dòng duy nhất.
- Mỗi ký tự trong chuỗi phải là một trong các ký tự sau: `'U'` (lên), `'D'` (xuống), `'L'` (trái), `'R'` (phải).
- Dãy lệnh di chuyển không được dài quá 9999 ký tự.

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        0 1
        -1 0
        1 0
        0 -1
        0 -3
        ```  
    ???+ success "Output"  
        ```sample
        DRRUUULLDD
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        -2 0
        -1 -1
        0 -2
        1 0
        0 1
        ```  
    ???+ success "Output"  
        ```sample
        URRDLLURUULDDLLLDR
        ```  
