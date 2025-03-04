### SABOR
Chủ tịch của **đảng cầm quyền** đang tổ chức một cuộc hợp tại trụ sở của đảng. Các chính trị gia, là thành viên của đảng, đang sống trên một lưới hai chiều, mỗi ô có một chính trị gia sống ở đó (ngoại trừ các ô có vật cản). Trụ sở nằm ở ô $(0, 0)$, và cũng là nơi mà chủ tịch sống.

Các chính trị gia co thể di chuyển một trong bốn hướng (trên, dưới, trái, phải), mỗi bước họ sẽ đi đến một trong bốn ô kề cạnh. Họ không thể đi vào ô có vật cản.cuộc họp sẽ có sự tham dự của tất cả các thành viên của đảng **cách trụ sở nhiều nhất $S$ bước**. Mỗi thành viên tới cuộc họp sẽ phải **đi theo tuyến đường ngắn nhất** để đến trụ sở (có thể đi theo bất kỳ tuyến đường nào cùng độ dài với tuyến ngắn nhất đó). 

Chủ tịch nhận thấy rằng các chính trị gia sẽ **đổi phe** với **mỗi bước mà họ di chuyển**, tức là họ trử thành thành viên của đảng đổi lập (trên chính trường chỉ có hai đảng).

Viết một chương trình xác định rằng có bao nhiêu chính trị gia đến cuộc họp là thành viên của **đảng cầm quyền**, và bao nhiêu là của **đảng đối lập**.

#### Input: 
- Dòng đàu tiên chứa hai số nguyên $B$ và $S$ $(0 \le B \le 10^4; 1 \le S \le 10^4)$ mô tả số lượng vật cản và số bước xa nhất mà một chính trị gia có thể đi.
- Mỗi dòng trong số $B$ dòng tiếp theo chứa hai số nguyên là tọa độ của mỗi vật cản. Giá trị tuyệt đối của cả hai tọa độ đều bé hơn $1000$.
- Dữ liệu đảm bảo rằng không có hai vật cản nào nằm cùng một ô, và không có vật cản nào nằm ở ô $(0, 0)$.
  

#### Output: 
- Đâu ra trên một dòng là hai số nguyên dương cách nhau một khoảng trắng là số lượng chính trị gia đến cuộc họp thuộc phe **đảng cầm quyền** và số lượng chính trị gia đến cuộc họp là của **đảng đối lập**.


#### Example:

!!! question "Test 1"
    ???+ "Input"
        ```
        0 2
        ```
    ???+ "Output"
        ```
        9 4
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        4 5
        -1 1
        0 -1
        0 1
        1 0 
        ```
    ???+ "Output"
        ```
        10 16
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        4 50000
        1 1
        -1 -1
        1 -1
        -1 1 
        ```
    ???+ "Output"
        ```
        2500099997 2500000000
        ```