###Skener
Sau khi giải quyết xong đống diêm, Mirko lại phải đối mặt với một nhiệm vụ mới. Mẹ của cậu yêu cầu cậu đọc một bài báo về những cặp đôi trong showbiz. Tuy nhiên, cỡ chữ của bài báo quá nhỏ để Mirko có thể đọc. May mắn thay, cậu có một cái máy scan trong tủ để phóng to cỡ chữ lên.

Bài báo được biểu diễn dưới dạng một ma trận các kí tự với $R$ hàng và $C$ cột. Các kí tự bao gồm các kí tự bảng chữ cái tiếng Anh, chữ số và '.' (dấu chấm). Máy scan của Mirko nhận vào 2 tham số $ZR$ và $ZC$. Sau đó, nó thay thế tất cả các kí tự được scan bằng một ma trận $ZR * ZC$, với tất cả phần tử của ma trận đều là kí tự ban đầu.

Mirko chạy vào phòng, bật máy lên và nhận ra phần mềm scan của máy cậu đã hỏng. Vì vậy, cậu ấy cần tới sự giúp đỡ của bạn!

#### Input
- Dòng đầu tiên chứa bốn số nguyên $R$, $C$, $ZR$, $ZC$ $(1 \leq R, C \leq 50, 1 \leq ZR, ZC \leq 5)$

#### Output
- In ra ma trận biểu diễn bài báo sau khi được phóng to. 


!!! question "Test 1"
    ???+ "Input"
        ```sample
        3 3 1 2
        .x.
        x.x
        .x. 

        ```
    ???+ success "Output"
        ```sample
        ..xx..
        xx..xx
        ..xx.. 

        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
        3 3 2 1
        .x.
        x.x
        .x. 

        ```
    ???+ success "Output"
        ```sample
        .x.
        .x.
        x.x
        x.x
        .x.
        .x.

        ```
        