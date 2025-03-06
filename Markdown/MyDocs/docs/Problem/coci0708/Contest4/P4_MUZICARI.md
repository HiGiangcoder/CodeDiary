### MUZICARI 

Nhóm nhạc dân gian nổi tiếng "The Drinking Musicians" sắp đến thị trấn của bạn. Họ không chỉ nổi tiếng với kỹ năng chơi nhạc mà còn với tính cách ngang tàng. Họ luôn đến trễ, không biết mình đang ở đâu và thường xuyên gặp khó khăn trong việc tìm sân khấu.  

Hơn nữa, trong suốt buổi hòa nhạc, mỗi nhạc công sẽ có một khoảng thời gian nghỉ. Nếu có từ ba người trở lên nghỉ cùng lúc, họ sẽ gây rắc rối trong thị trấn, khiến những người còn lại hoảng loạn và chơi sai hợp âm.  

Buổi hòa nhạc kéo dài $T$ phút, trong đó mỗi nhạc công $N$ sẽ có một khoảng nghỉ đã biết trước.  

Hãy giúp ban tổ chức lập lịch nghỉ sao cho tại bất kỳ thời điểm nào, tối đa chỉ có hai người nghỉ cùng lúc. Mọi khoảng nghỉ phải hoàn toàn nằm trong thời gian diễn ra buổi hòa nhạc.  

#### Input  
- Dòng đầu chứa hai số nguyên $T$ và $N$ $(1 \leq T \leq 5000, 1 \leq N \leq 500)$, là thời lượng của buổi hòa nhạc tính theo phút và số lượng nhạc công trong nhóm.  
- Dòng tiếp theo chứa $N$ số nguyên, mỗi số biểu thị thời lượng nghỉ (tính theo phút) của từng nhạc công, cách nhau bởi một dấu cách.  
- Dữ liệu đầu vào đảm bảo luôn tồn tại ít nhất một cách xếp lịch hợp lệ.  

#### Output  
- In ra $N$ số nguyên, mỗi số biểu thị số phút nhạc công đó sẽ biểu diễn trước khi nghỉ.  
- Các số được in theo đúng thứ tự của các nhạc công trong đầu vào.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        8 3
        4 4 4
        ```  
    ???+ success "Output"  
        ```sample
        0 2 4
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        10 5
        7 5 1 2 3
        ```  
    ???+ success "Output"  
        ```sample
        3 3 9 0 0
        ```  
