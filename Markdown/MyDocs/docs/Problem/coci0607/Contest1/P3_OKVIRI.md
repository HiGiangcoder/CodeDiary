### OKVIRI  

“Khung Peter Pan” là một cách trang trí văn bản trong đó mỗi ký tự được bao quanh bởi một khung hình kim cương, với các khung của các ký tự liền kề đan xen nhau. Một khung Peter Pan cho một chữ cái trông như sau (ký tự `X` là ký tự cần đóng khung):  
```
..#..
.#.#.
#.X.#
.#.#.
..#..
```

Tuy nhiên, chỉ sử dụng một kiểu khung như vậy sẽ khá đơn điệu, vì vậy chúng ta sẽ đóng khung mỗi ký tự thứ ba bằng “khung Wendy”. Khung Wendy trông như sau:  

```
..*..
.*.*.
*.X.*
.*.*.
..*..
```

Khi khung Wendy chồng lên khung Peter Pan, khung Wendy (vì trông đẹp hơn) sẽ được đặt lên trên. Để hiểu rõ hơn về cách đan xen giữa các khung, hãy xem các ví dụ bên dưới.  

#### Input  
Dòng đầu tiên và duy nhất chứa tối đa $15$ chữ cái in hoa của bảng chữ cái tiếng Anh.  

#### Output  
In ra từ được viết bằng cách sử dụng khung Peter Pan và Wendy trên $5$ dòng.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        A  
        ```  
    ???+ "Output"  
        ```  
        ..#..  
        .#.#.  
        #.A.#  
        .#.#.  
        ..#..  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        DOG  
        ```  
    ???+ "Output"  
        ```  
        ..#...#...*..  
        .#.#.#.#.*.*.  
        #.D.#.O.*.G.*  
        .#.#.#.#.*.*.  
        ..#...#...*..  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        ABCD  
        ```  
    ???+ "Output"  
        ```  
        ..#...#...*...#..  
        .#.#.#.#.*.*.#.#.  
        #.A.#.B.*.C.*.D.#  
        .#.#.#.#.*.*.#.#.  
        ..#...#...*...#..  
        ```  
