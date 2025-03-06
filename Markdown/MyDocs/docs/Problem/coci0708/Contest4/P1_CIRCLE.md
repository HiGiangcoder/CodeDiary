### CIRCLE 

Ở một ngôi làng gần đó, người đưa thư, người giao sữa và nhân viên thu gom rác phải đối mặt với cùng một vấn đề mỗi sáng: ngôi nhà số 18.  

Ngôi nhà này được canh giữ bởi hai con chó thường xuyên gây rắc rối. Tuy nhiên, điều mà họ không biết là hành vi của những con chó này hoàn toàn có thể dự đoán được.  

- Khi một ngày bắt đầu, chó thứ nhất sẽ hung dữ trong $A$ phút, sau đó bình tĩnh trong $B$ phút.  
- Chó thứ hai sẽ hung dữ trong $C$ phút, rồi bình tĩnh trong $D$ phút.  
- Cả hai con chó lặp lại hành vi này vô hạn lần, bắt đầu một chu kỳ mới ngay sau khi chu kỳ cũ kết thúc.  

Với thời điểm mà người đưa thư, người giao sữa và nhân viên thu gom rác đến ngôi nhà số 18, hãy xác định có bao nhiêu con chó (không có con nào, một con hoặc cả hai con) tấn công mỗi người.  

#### Input  
- Dòng đầu tiên chứa bốn số nguyên $A, B, C, D$ ($1 \leq A, B, C, D \leq 999$), mô tả hành vi của hai con chó.  
- Dòng thứ hai chứa ba số nguyên $P, M, G$ ($1 \leq P, M, G \leq 999$), tương ứng là thời điểm người đưa thư, người giao sữa và nhân viên thu gom rác đến ngôi nhà số 18.  

#### Output  
- In ra ba dòng, mỗi dòng chứa một trong ba từ:  
  - "both" nếu cả hai con chó tấn công.  
  - "one" nếu chỉ có một con chó tấn công.  
  - "none" nếu không có con chó nào tấn công.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        2 2 3 3
        1 3 4
        ```  
    ???+ success "Output"  
        ```sample
        both
        one
        none
        ```  


!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        2 3 4 5
        4 9 5
        ```  
    ???+ success "Output"  
        ```sample
        one
        none
        none
        ```  
