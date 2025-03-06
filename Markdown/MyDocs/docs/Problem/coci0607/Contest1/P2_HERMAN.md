### HERMAN 

Nhà toán học người Đức thế kỷ 19, Hermann Minkowski, đã nghiên cứu một loại hình học phi Euclid được gọi là hình học taxicab. Trong hình học taxicab, khoảng cách giữa hai điểm $T_1(x_1, y_1)$ và $T_2(x_2, y_2)$ được xác định như sau:  

$$D(T_1,T_2) = |x_1 - x_2| + |y_1 - y_2|$$  

Tất cả các định nghĩa khác vẫn giữ nguyên như trong hình học Euclid, bao gồm cả định nghĩa về đường tròn: Một đường tròn là tập hợp tất cả các điểm trong mặt phẳng có khoảng cách cố định (bán kính) từ một điểm cố định (tâm đường tròn).  

Chúng ta quan tâm đến sự khác biệt về diện tích của hai đường tròn có bán kính $R$, một đường tròn trong hình học Euclid thông thường và một đường tròn trong hình học taxicab. Nhiệm vụ giải quyết vấn đề khó khăn này được giao cho bạn.  

#### Input  
Dòng đầu tiên và duy nhất của đầu vào chứa một số nguyên $R$, có giá trị nhỏ hơn hoặc bằng $10000$.  

#### Output  
- Dòng đầu tiên in ra diện tích của một đường tròn có bán kính $R$ trong hình học Euclid thông thường.  
- Dòng thứ hai in ra diện tích của một đường tròn có bán kính $R$ trong hình học taxicab.  

Lưu ý: Kết quả trong khoảng sai số ±$0.0001$ so với đáp án chính thức sẽ được chấp nhận.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        1  
        ```  
    ???+ "Output"  
        ```  
        3.141593  
        2.000000  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        21  
        ```  
    ???+ "Output"  
        ```  
        1385.442360  
        882.000000  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        42  
        ```  
    ???+ "Output"  
        ```  
        5541.769441  
        3528.000000  
        ```  
