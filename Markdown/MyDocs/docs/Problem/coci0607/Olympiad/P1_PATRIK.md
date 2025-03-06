### PATRIK 
Có $N$ người đang xếp hàng để vào một buổi hòa nhạc. Mọi người cảm thấy buồn chán nên họ quyết định quay sang tìm kiếm một người quen trong hàng.

Hai người A và B đứng trong hàng có thể nhìn thấy nhau nếu họ đứng ngay cạnh nhau hoặc nếu kkhoong có ai ở giữa họ cao hơn hẳn so với A hoặc B.

Viết một chương trình xác định số cặp có thể nhìn thấy nhau.

#### Input: 
- Dòng đầu tiên chứa số nguyên $N$ $(1 \le N \le 5*10^5)$ là số lượng người đứng xếp hàng.
- Mỗi dòng trong số $N$ dòng tiếp theo chứa một số nguyên duy nhất mô tả độ cao của mỗi người (đơn vị nanomet).
- Mọi nguời đều có chiều cao thấp hơn 231 nanomet.
- Chiều cao được đưa ra theo thứ tự mà mọi người đang đứng trong hàng.


#### Output: 
- Dữ liệu đầu ra là một số nguyên duy nhất mô tả số cặp có thể nhìn thấy nhau.


#### Example:

!!! question "Test 1"
    ???+ "Input"
        ```
        7
        2
        4
        1
        2
        2
        5
        1 
        ```
    ???+ "Output"
        ```
        10
        ```