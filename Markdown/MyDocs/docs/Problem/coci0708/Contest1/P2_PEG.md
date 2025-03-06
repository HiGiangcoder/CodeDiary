###PEG
Trong tựa game logic nổi tiếng Peg, các quân cờ nhảy qua các quân cờ khác để loại quân cờ đó ra khỏi trò chơi cho đến khi chỉ còn một quân duy nhất. 
Đây là trạng thái ban đầu của bàn cờ:

        ooo
        ooo
      ooooooo
      ooo.ooo
      ooooooo
        ooo
        ooo
 
Các kí tự '**o**' biểu diễn một quân cờ và kí tự '**.**' biểu diễn một ô trống. Trong một nước, một người chơi có thể chọn $1$ quân cờ để di chuyển theo hướng lên trên, xuống dưới, sang trái hoặc sang phải nếu ở hướng đó có một quân cờ khác và một ô trống ở phía sau quân cờ đó. Quân cờ được chọn sẽ nhảy đến ô trống và loại quân cờ bị nhảy qua ra khỏi trò chơi.

Cho biết trạng thái ban đầu của bàn cờ, hãy viết chương trình đếm số lượng nước đi hợp lệ.

####Input
 - Trạng thái ban đầu của bàn cờ, được biểu diễn trên $7$ dòng, mỗi dòng $7$ kí tự. $2$ kí tự đầu tiên và cuối cùng của $2$ hàng đầu tiên và cuối cùng là khoảng trắng, tất cả các kí tự còn lại là '**o**' hoặc '**.**'.

####Output
- Số lượng nước đi hợp lệ.
!!! question "Test 1"
    ???+ "Input"
        ```sample
          ooo  
          ooo  
        ooooooo
        ooo.ooo
        ooooooo
          ooo  
          ooo  
        ```
    ???+ success "Output"
        ```sample
        4
        ```
!!! question "Test 2"
    ???+ "Input"
        ```sample
          ooo  
          ooo  
        ..ooo..
        oo...oo
        ..ooo..
          ooo  
          ooo
        ```
    ???+ success "Output"
        ```sample
        12
        ```