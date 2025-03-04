### MAGIJA  

Nhà ảo thuật nổi tiếng Al'Dimi Kartimi cần một chương trình để giúp ông thiết kế mặt sau của những lá bài.  

Al'Dimi trước tiên vẽ góc phần tư trái trên của lá bài, sau đó vẽ góc phải trên đối xứng với góc trái trên qua trục dọc của lá bài. Tiếp theo, vẽ nửa dưới lá bài đối xứng với nửa trên qua trục ngang của lá bài.

Sau khi vẽ, Al'Dimi còn thêm một lỗi nhỏ (thay đổi một ô vuông) để giúp ông nhận diện từng lá bài (để gian lận).  

Hãy giúp Al'Dimi viết chương trình vẽ toàn bộ mặt sau của lá bài, dựa trên hình vẽ góc phần tư trái trên và vị trí lỗi.  

Đây là ba ví dụ về lá bài của Al'Dimi.

```
###.##.###
##########
.########.
..######..
####.#####
##########
..######..
.########.
##########
###.##.###
```
Ô lỗi là ô $(5,5)$.

```
#.#..#.#
#.####.#
#.####.#
........
.#.##.#.
.#.##.#.
........
#.####.#
#.####.#
#.#.##.#
```
Ô lỗi là ô $(10,5)$.

```
.#.##.##
#.#..#.#
........
..#..#..
..#..#..
........
#.#..#.#
##.##.##
```
Ô lỗi là ô $(1,1)$.

#### Input  
- Dòng đầu tiên chứa hai số nguyên $R$ và $C$ $(1 \leq R, C \leq 50)$, là số hàng và số cột của góc phần tư trái trên của lá bài.  
- $R$ dòng tiếp theo, mỗi dòng chứa $C$ ký tự `.` hoặc `#`, biểu diễn hình vẽ của góc phần tư trái trên.
- Dòng tiếp theo chứa hai số nguyên $A$ và $B$ $(1 \leq A \leq 2R, 1 \leq B \leq 2C)$, là tọa độ của lỗi.  

#### Output  
- In ra $2R$ dòng, mỗi dòng chứa $2C$ ký tự, biểu diễn toàn bộ mặt sau của lá bài.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        2 2
        #.
        .#
        3 3
        ```  
    ???+ "Output"  
        ```  
        #..#
        .##.
        .#..
        #..#
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        3 3
        ###
        ###
        ###
        1 4 
        ```  
    ???+ "Output"  
        ```  
        ###.##
        ######
        ######
        ######
        ######
        ######  
        ```  
!!! question "Test 3"  
    ???+ "Input"  
        ```  
        5 4
        #.#.
        #.##
        #.##
        ....
        .#.#
        10 5
        ```  
    ???+ "Output"  
        ```  
        #.#..#.#
        #.####.#
        #.####.#
        ........
        .#.##.#.
        .#.##.#.
        ........
        #.####.#
        #.####.#
        #.#.##.#
        ```  