### PRASE  

Có $N$ đứa trẻ đang ăn trưa cùng nhau. Lần lượt từng đứa trẻ lấy thức ăn từ bàn.  

Tuy nhiên, một số đứa chưa được dạy cách cư xử đúng mực nên chúng tranh giành thức ăn mà không nhường cho người khác. Nếu tại một thời điểm nào đó, một đứa trẻ lấy một miếng thức ăn và tổng số thức ăn mà đứa trẻ đó đã lấy (không tính miếng mới này) nhiều hơn tổng số thức ăn mà tất cả các đứa trẻ khác đã lấy cộng lại, thì mẹ của chúng sẽ nhắc nhở đứa trẻ đó phải cư xử đúng mực.  

Bạn sẽ được cung cấp thứ tự mà các đứa trẻ lấy thức ăn. Hãy viết chương trình tính xem mẹ đã phải nhắc nhở bao nhiêu lần.  

#### Input  
- Dòng đầu tiên chứa một số nguyên $N$ $(1 \leq N \leq 100)$, là số miếng thức ăn mà các đứa trẻ đã lấy.  
- $N$ dòng tiếp theo, mỗi dòng chứa tên của một đứa trẻ đã lấy một miếng thức ăn. Tên của mỗi đứa trẻ là một xâu gồm tối đa 20 chữ cái thường của bảng chữ cái tiếng Anh.  

#### Output  
- In ra số lần mẹ đã nhắc nhở bọn trẻ trên một dòng duy nhất.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        4  
        mirko  
        stanko  
        stanko  
        stanko  
        ```  
    ???+ "Output"  
        ```  
        1  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        17  
        a  
        b  
        b  
        a  
        a  
        a  
        c  
        a  
        b  
        b  
        c  
        b  
        b  
        b  
        b  
        b  
        b  
        ```  
    ???+ "Output"  
        ```  
        4  
        ``` 