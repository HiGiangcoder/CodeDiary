### TENKICI

Xin lỗi về sự hiểu lầm trước đó. Dưới đây là bản dịch tiếng Việt của văn bản bạn yêu cầu:

---

Mirko phát hiện một bộ sưu tập gồm \( N \) chiếc xe tăng cũ từ Thế chiến thứ Hai trong gác xép của ông nội. Anh lập tức gọi bạn mình là Slavko đến để chơi cùng. Họ tạo ra một chiến trường – một tấm ván gỗ bao gồm các ô vuông với \( N \) hàng và \( N \) cột.

Mỗi chiếc xe tăng có thể di chuyển đến một trong bốn ô liền kề trong một lần di chuyển. Một chiếc xe tăng có thể bắn vào bất kỳ ô nào trong cùng một hàng và cột mà nó đang đứng. Xe tăng được coi là "bảo vệ" hàng và cột mà nó đang ở.

Ngoài ra, không có hai chiếc xe tăng nào có thể đứng ở cùng một ô tại bất kỳ thời điểm nào.

Sau nhiều giờ chơi và hai lần thử trước, mẹ của Mirko lại la mắng họ phải xuống ăn trưa và họ quyết định sắp xếp lại các chiếc xe tăng sao cho mỗi chiếc xe tăng bảo vệ một hàng và một cột khác nhau (có nghĩa là mỗi hàng và mỗi cột chỉ chứa một chiếc xe tăng).

Tuy nhiên, họ muốn làm điều này với số lần di chuyển ít nhất.

Hãy viết một chương trình tìm ra số lần di chuyển ít nhất cần thiết để sắp xếp lại các chiếc xe tăng sao cho mỗi hàng và mỗi cột chứa đúng một chiếc xe tăng, và in ra một chuỗi các bước di chuyển ngắn nhất.

---

### **Dữ liệu vào:**
Dòng đầu tiên chứa một số nguyên \( N \) (\( 5 \leq N \leq 500 \)). Mỗi dòng tiếp theo chứa hai số nguyên \( R \) và \( C \) (\( 1 \leq R, C \leq N \)), chỉ vị trí hàng và cột của mỗi chiếc xe tăng lúc ban đầu. Không có hai chiếc xe tăng nào ở cùng một ô.

### **Dữ liệu ra:**
In ra số lượng di chuyển tối thiểu (gọi là \( K \)) trên dòng đầu tiên. Mỗi dòng tiếp theo sẽ chứa thông tin về một chiếc xe tăng được di chuyển và hướng di chuyển của nó, với số thứ tự của xe tăng và hướng di chuyển được phân tách bởi một khoảng trắng. Hướng có thể là một trong bốn chữ cái in hoa: 'L' (trái), 'R' (phải), 'U' (lên) và 'D' (xuống).

Lưu ý: Chuỗi các bước di chuyển không nhất thiết phải là duy nhất.

**Chấm điểm:**
- Nếu cả số lần di chuyển \( K \) và chuỗi di chuyển đều chính xác, chương trình của bạn sẽ đạt điểm tối đa.
- Nếu chương trình của bạn chỉ đưa ra số lần di chuyển đúng \( K \) mà không đưa ra chuỗi di chuyển hoặc chuỗi di chuyển không đúng, bạn sẽ được 60% điểm cho trường hợp kiểm tra đó.


Mirko  found  a  collection  of  N  toy  tanks  dating  back  to  the  Second  World  War  on  his  grandfather's attic. He promptly called his friend Slavko to play with him. They made a battlefield – a wooden board consisting of squares in N rows and N columns.

Each tank can be moved to one of the four neighbouring squares in a single move. A tank can shoot at any square in the same row and column. The tank is said to be guarding the row and column it is in. 

Additionally, no two tanks can be in the same square at any time. 

After  many  hours  of  play  and  two  previous  attempts, Mirko's mom yelled at them to come down for lunch  again,  and  they  decided  to  rearrange  the  tanks  so  that  each  tank  guards  a  different row and column (meaning also that each row and column contains only one tank).

However, they want to do this using the minimum number of moves. 

Write a program that finds the minimum number of moves required to rearrange the tanks so that each row and each column contains a single tank, and one such shortest sequence of moves. 


#### Input: 
The first line of input contains the integer N (5 ≤ N ≤ 500). Each of the following N lines contains two integers R and C (1 ≤ R, S ≤ N), the row and column of a 
single tank at the moment of mom's call. No two tanks are on the same square. Rows and columns are marked 1 through N, top-down and left-to-right. 


#### Output:
Output the minimum number of moves (call this number K) on the first line. Each  of  the  next  K  lines  should  contain  the  tank  being  moved  and  the  direction  it  is  moved  in,  
separated by a single space. Tanks are numbered 1 through N, in the order in which they are given in the input. The direction can be one of four uppercase letters: 'L' for left, 'R' for right, 'U' for up and 'D' for down. 
Note: The sequence need not be unique. 
Scoring 
If  both  the  number  K  and  the  sequence  of  moves  are  correct,  your  program  will  score  full  points  on  
the test case. If  your  program  outputs  the  correct  number  K  and  does  not  output  the  sequence  of  moves,  or  the  
sequence of moves is incorrect, you will get 60% of the points for that test case.


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