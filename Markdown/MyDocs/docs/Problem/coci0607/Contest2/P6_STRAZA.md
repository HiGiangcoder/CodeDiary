### STRAŽA

Gần một căn cứ quân sự có một hệ thống hào được mô hình hóa dưới dạng các đoạn thẳng trên mặt phẳng. Ban đêm, khi phần lớn binh sĩ đang ngủ say, ba lính canh đứng gác để giám sát các hào. Hai lính canh có thể nhìn thấy nhau nếu tồn tại một hào (hoặc một chuỗi các hào nối tiếp nhau) trải dài toàn bộ đoạn thẳng nối giữa họ và không có lính canh thứ ba nằm trên đoạn thẳng đó. 

Vì lý do an ninh, các lính canh phải được đặt sao cho mỗi người có thể nhìn thấy hai người còn lại. Hỏi có bao nhiêu cách sắp xếp các lính canh theo yêu cầu trên các hào?

#### Input
- Dòng đầu tiên chứa số nguyên $N$ ($1 \leq N \leq 20$), số lượng hào.
- Mỗi trong $N$ dòng tiếp theo chứa bốn số nguyên dương $X_1$, $Y_1$, $X_2$, $Y_2$ ($1 \leq X_1, Y_1, X_2, Y_2 \leq 1000$), trong đó $(X_1, Y_1)$ là tọa độ một đầu hào và $(X_2, Y_2)$ là tọa độ đầu còn lại.
- Các hào trong dữ liệu đầu vào có thể trùng nhau hoặc có chung điểm đầu mút.

#### Output
- In ra số cách đặt lính canh thỏa mãn điều kiện trên một dòng duy nhất.

#### Example

!!! question "Test 1"
    ???+ "Input"
        ```sample
        6
        0 0 1 0  
        0 0 0 1 
        1 0 1 1 
        0 1 1 1 
        0 0 1 1 
        1 0 0 1 
        ```
    ???+ success "Output"
        ```sample
        8
        ```

!!! question "Test 2"
    ???+ "Input"
        ```sample
        4
        5 1 7 1 
        1 1 5 1 
        4 0 4 4 
        7 0 3 4 
        ```
    ???+ success "Output"
        ```sample
        1
        ```

!!! question "Test 3"
    ???+ "Input"
        ```sample
        3
        2 2 3 2 
        3 2 3 3 
        3 3 2 3 
        ```
    ???+ success "Output"
        ```sample
        0
        ```

