### TENKICI

Mirko tìm thấy một bộ sưu tập $N$ chiếc xe tăng đồ chơi cũ từ thời *Thế chiến II* trên gác xép của ông nội. Cậu lập tức gọi bạn mình là Slavko đến để chơi cùng. Họ tạo ra một chiến trường là một tấm ván gỗ bao gồm các ô vuông với $N$ hàng và $N$ cột.

Mỗi chiếc xe tăng có thể di chuyển đến một trong bốn ô kề cạnh. Một chiếc xe tăng có thể bắn vào bất kỳ ô vuông nào trên cùng hàng hoặc cùng cột mà nó đang đứng. Một xe tăng được coi là "bảo vệ" hàng và cột mà nó đang đứng.

Ngoài ra, không có 2 xe tăng nào nằm trong cùng một ô vuông tại bất kỳ một thời điểm nào.

Sauu nhiều giờ chơi, mẹ của Mirko la xuống ăn trưa, vì thế họ quyết định sắp xếp lại những chiếc xe tăng sao cho mỗi chiếc xe tăng đều bảo vệ các hàng và các cột khác nhau (tức là mỗi hàng và mỗi cột đêu chỉ chứa duy nhất một xe tăng).

Tuy nhiên, họ muốn làm điều đó với số lần di chuyển các xe tăng là ít nhất có thể.

Viết một chương trình tìm số lần di chuyển các xe tăng tối thiểu để sắp xếp lại các xe tăng sao cho mỗi hàng và mỗi cột chứa duy nhất một xe, và in ra một chuỗi các bước di chuyển ngắn nhất tìm được.


#### Input: 
- Dòng đầu tiên chứa một số nguyên $N$ $(5 \le N \le 500)$. 
- Mỗi dòng trong số $N$ dòng tiếp theo chứa hai số nguyên $R$ và $C$ $(1 \le R, C \le N)$ mô tả vị trí hàng và cột của mỗi xe tăng tại thời điểm bị mẹ của Mirko gọi đi ăn cơm. Đảm bảo rằng không có bất kỳ hai xe tăng nào nằm trong cùng một ô vuông. Các hàng và các cột được đánh số từ $1$ đến $N$, từ trên xuống dưới và từ trái qua phải.


#### Output:
- Dòng đầu tiên in ra số lần di chuyển tối thiểu (ký hiệu là $K$) trên dòng đầu tiên. 
- Mỗi dòng trong số $K$ dòng tiếp theo, in ra chỉ số của xe tăng được di chuyển và hướng di chuyển của nó (số thứ tự của xe tăng và hướng di chuyển được phân cách bằng một khoảng trắng). Hướng di chuyển của xe tăng được ký hiệu bởi bốn chữ cái in hoa: 'L', 'R', 'U', 'D' lần lượt là trái, phải, trên, dưới.
- Lưu ý rằng chuỗi các bước di chuyển của xe tăng có thể có nhiều cách.
 

#### Scoring 
Nếu cả hai số $K$ và cách di chuyển là đúng, bạn sẽ nhận được toàn bộ số điểm cho mỗi test. Nếu chương trình của bạn chỉ đúng $K$ và không in ra cách di chuyển hoặc cách di chuyển là sai thì bạn sẽ nhận được $60\%$ cho mỗi test.


#### Example:
!!! question "Test 1"
    ???+ "Input"
        ```
        5 
        1 1 
        1 2 
        1 3 
        1 4 
        1 5
        ```
    ???+ "Output"
        ```
        10 
        1 D 
        2 D 
        3 D 
        4 D 
        1 D 
        2 D 
        3 D 
        1 D 
        2 D 
        1 D
        ```
    
!!! question "Test 2"
    ???+ "Input"
        ```
        5 
        2 3 
        3 2 
        3 3 
        3 4 
        4 3
        ```
    ???+ "Output"
        ```
        8 
        1 R 
        1 R 
        2 U 
        2 U 
        4 D 
        4 D 
        5 L 
        5 L
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        6 
        1 1 
        1 2 
        2 1 
        5 6 
        6 5 
        6 6
        ```
    ???+ "Output"
        ```
        8 
        2 R 
        2 D 
        3 D 
        3 R 
        4 U 
        4 L 
        5 L 
        5 U
        ```