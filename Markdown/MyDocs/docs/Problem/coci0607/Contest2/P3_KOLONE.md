### KOLONE

Khi di chuyển, kiến tạo thành hàng sao cho mỗi con kiến (trừ con đầu tiên) đều đứng sau một con kiến khác. Tuy nhiên, ít ai biết điều gì sẽ xảy ra khi hai hàng kiến di chuyển theo hướng ngược nhau gặp nhau trong một lối đi quá hẹp để cả hai có thể đi qua. 

Một giả thuyết cho rằng, trong tình huống này, kiến sẽ nhảy qua nhau. 

Từ thời điểm hai hàng gặp nhau, mỗi giây, mỗi con kiến sẽ nhảy qua (hoặc bị nhảy qua, theo sự đồng thuận của chúng) con kiến trước mặt nó để hai con kiến đổi chỗ cho nhau, nhưng chỉ khi con kiến kia đang di chuyển theo hướng ngược lại. Hãy tìm thứ tự của các con kiến sau $T$ giây.

#### Input  
- Dòng đầu tiên chứa hai số nguyên $N1$ và $N2$, lần lượt là số lượng kiến trong hàng thứ nhất và hàng thứ hai.
- Hai dòng tiếp theo chứa thứ tự các con kiến trong hàng thứ nhất và hàng thứ hai (từ đầu đến cuối). Mỗi con kiến được xác định duy nhất bởi một chữ cái in hoa của bảng chữ cái tiếng Anh (mỗi chữ cái là duy nhất trong cả hai hàng).
- Dòng cuối cùng chứa số nguyên $T$ ($0 \leq T \leq 50$).

#### Output  
- In ra thứ tự của các con kiến sau $T$ giây trên một dòng duy nhất. Góc nhìn của chúng ta là hàng kiến thứ nhất đến từ bên trái và hàng còn lại đến từ bên phải.

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample  
        3 3  
        ABC  
        DEF  
        0  
        ```  
    ???+ success "Output"  
        ```sample  
        CBADEF  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample  
        3 3  
        ABC  
        DEF  
        2  
        ```  
    ???+ success "Output"  
        ```sample  
        CDBEAF  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```sample  
        3 4  
        JLA  
        CRUO  
        3  
        ```  
    ???+ success "Output"  
        ```sample  
        CARLUJO  
        ```  

