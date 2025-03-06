###Sibice

Mirko nghịch diêm và làm rơi hết diêm ra phòng của cậu. Mẹ của cậu không thích điều đó và yêu cầu cậu dọn hết các que diêm vào một chiếc hộp. Tuy nhiên, Mirko để ý rằng có một số que diêm quá dài so với cái hộp và cậu quyết định xử lí những que diêm đó bằng cách ném vào thùng rác của nhà hàng xóm. 

Một que diêm được coi là vừa với chiếc hộp nếu que diêm đó có thể được đặt hoàn toàn xuống đáy của chiếc hộp.

Cho $N$ $(1 \leq N \leq 50)$ là số que diêm ở trên sàn. Với mỗi que diêm, hãy giúp Mirko xác định xem nó có vừa với chiếc hộp không nhé!
#### Input
 - Dòng đầu tiên chứa ba số nguyên $N$ $(1 \leq N \leq 50)$, $W$ và $H$ $(1 \leq W,H \leq 100)$ lần lượt là số que diêm cần kiểm tra và kích thước của chiếc hộp.
 - $N$ dòng tiếp theo, dòng thứ $i$ chứa số nguyên $x_i$ $(1 \leq x_i \leq 1000)$ là độ dài của que diêm thứ $i$.

#### Output
 - Với mỗi que diêm, in ra trên một dòng:
     + ***DA*** nếu que diêm đó vừa với chiếc hộp.
     + ***NE*** trong trường hợp còn lại.


!!! question "Test 1"
    ???+ "Input"
        ```sample
        5 3 4
        3
        4
        5
        6
        7
        ```
    ???+ success "Output"
        ```sample
        DA
        DA
        DA
        NE
        NE
        ```
        