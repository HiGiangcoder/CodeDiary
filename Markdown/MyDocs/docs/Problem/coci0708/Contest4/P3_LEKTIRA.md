### LEKTIRA

Mario lại bày ra những trò chơi ngớ ngẩn thay vì đọc Dostoevsky cho bài tập ở trường. Luật chơi mới của cậu như sau:  

- Đầu tiên, cậu chọn một từ ngẫu nhiên trong cuốn sách.  
- Sau đó, cậu chia từ đó tại hai vị trí bất kỳ để có ba từ riêng biệt.  
- Tiếp theo, cậu đảo ngược thứ tự các chữ cái trong từng từ (đổi vị trí chữ cái đầu và cuối, chữ thứ hai và thứ áp chót, v.v.).  
- Cuối cùng, cậu ghép ba từ lại theo đúng thứ tự ban đầu.  

Mục tiêu của trò chơi là thu được từ có thứ tự từ điển nhỏ nhất có thể. Nói cách khác, trong tất cả các từ có thể thu được từ quy trình trên, hãy tìm từ xuất hiện sớm nhất trong từ điển.  

Viết chương trình giúp Mario chơi trò chơi này một cách hoàn hảo.  

#### Input  
- Dòng duy nhất chứa một từ do Mario chọn, bao gồm các chữ cái thường trong bảng chữ cái tiếng Anh, không có dấu cách.  
- Độ dài của từ nằm trong khoảng từ $3$ đến $50$ ký tự (bao gồm cả hai đầu).  

#### Output  
- In ra từ tốt nhất trên một dòng.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```sample
        dcbagfekjih
        ```  
    ???+ success "Output"  
        ```sample
        abcdefghijk
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```sample
        mobitel
        ```  
    ???+ success "Output"  
        ```sample
        bometil
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```sample
        anakonda
        ```  
    ???+ success "Output"  
        ```sample
        aanadnok
        ```  
