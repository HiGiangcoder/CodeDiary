### BICIKLI

Một cuộc đua xe đạp đang được tổ thức tại vùng đất xa xôi. Vùng đất này có $N$ thị trấn, được đánh số từ $1$ đến $N$. Có $M$ con đường một chiều giữa các thị trấn. Cuộc đua sẽ bắt đầu tại thị trấn $1$ và kết thúc tại thị trấn $2$. 

Có bao nhiêu cách chọn tuyến đường đua khác nhau? Hai tuyến đường được coi là khác nhau nếu chúng không được tạo bởi chính xác một tập hợp các con đường.

#### Input: 
- Dòng đầu tiên chứa hai số nguyên $N$ và $M$ $(1 \le N \le 10^4; 1 \le M \le 10^5)$ mô tả số thị trấn và số con đường.
- Mỗi dòng trong số $M$ dòng tiếp hteo chứa 2 số nguyên phân biệt $A$ và $B$, mô tả con đường đi từ $A$ đến $B$. Có thể có nhiều con đường giữa hai thị trấn.


#### Output: 
In ra số lượng tuyến đường khác nhau trên một dòng. Nếu số cần in ra có nhiều hơn 9 chữ số, hãy in ra 9 chữ số cuối cùng (tức là phần dư của $10^9$). Nếu có vô số tuyến đường, in ra `inf`.


#### Example:

!!! question "Test 1"
    ???+ "Input"
        ```
        6 7 
        1 3 
        1 4 
        3 2 
        4 2 
        5 6 
        6 5 
        3 4
        ```
    ???+ "Output"
        ```
        3
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        6 8 
        1 3 
        1 4 
        3 2 
        4 2 
        5 6 
        6 5 
        3 4 
        4 3 
        ```
    ???+ "Output"
        ```
        inf
        ```

!!! question "Test 3"
    ???+ "Input"
        ```
        31 60 
        1 3 
        1 3 
        3 4 
        3 4 
        4 5 
        4 5 
        5 6 
        5 6 
        6 7 
        6 7 
        ... 
        ... 
        ... 
        28 29 
        28 29 
        29 30 
        29 30 
        30 31 
        30 31 
        31 2 
        31 2
        ```
    ???+ "Output"
        ```
        073741824
        ```