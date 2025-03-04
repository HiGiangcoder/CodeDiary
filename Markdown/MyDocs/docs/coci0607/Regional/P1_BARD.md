### BARD

Mỗi buổi tối, dân làng trong một ngôi làng nhỏ tụ họp quanh một đống lửa lớn và hát những bài ca. Một nhân vật quan trọng trong cộng đồng là người hát rong. Mỗi buổi tối, nếu người hát rong có mặt, anh ấy sẽ hát một bài hát mới mà chưa ai từng nghe trước đó, và không bài hát nào khác được hát trong đêm đó. Nếu người hát rong không có mặt, các dân làng khác sẽ hát cùng nhau và trao đổi tất cả những bài hát mà họ biết.

Dựa vào danh sách những dân làng có mặt trong $E$ buổi tối liên tiếp, hãy xác định tất cả những dân làng biết tất cả các bài hát đã được hát trong khoảng thời gian đó.

#### Input
- Dòng đầu tiên chứa một số nguyên $N$ ($1 \leq N \leq 100$), số lượng dân làng. Dân làng được đánh số từ $1$ đến $N$. Dân làng số $1$ là người hát rong.
- Dòng thứ hai chứa một số nguyên $E$ ($1 \leq E \leq 50$), số lượng buổi tối.
- Mỗi trong $E$ dòng tiếp theo chứa danh sách các dân làng có mặt trong buổi tối đó. Mỗi dòng bắt đầu với một số nguyên dương $K$ ($2 \leq K \leq N$), số lượng dân làng có mặt vào buổi tối đó, sau đó là $K$ số nguyên dương, cách nhau bởi khoảng trắng, đại diện cho các dân làng.
- Không có dân làng nào xuất hiện hai lần trong một buổi tối.
- Người hát rong sẽ xuất hiện ít nhất một lần trong toàn bộ danh sách các buổi tối.

#### Output
- In ra tất cả các dân làng biết tất cả các bài hát, bao gồm cả người hát rong, mỗi số nguyên trên một dòng theo thứ tự tăng dần.

#### Example

!!! question "Test 1"
    ???+ "Input"
        ```sample
        4
        3
        2 1 2
        3 2 3 4
        3 4 2 1
        ```
    ???+ success "Output"
        ```sample
        1
        2
        4
        ```

!!! question "Test 2"
    ???+ "Input"
        ```sample
        8
        5
        4 1 3 5 4
        2 5 6
        3 6 7 8
        2 6 2
        4 2 6 8 1
        ```
    ???+ success "Output"
        ```sample
        1
        2
        6
        8
        ```

!!! question "Test 3"
    ???+ "Input"
        ```sample
        5
        3
        2 1 3
        2 2 1
        4 2 1 4 5
        ```
    ???+ success "Output"
        ```sample
        1
        ```