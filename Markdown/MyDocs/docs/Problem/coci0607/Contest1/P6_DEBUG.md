### DEBUG  

Khi gỡ lỗi một chương trình, Mirko nhận thấy rằng một lỗi trong chương trình có thể liên quan đến sự tồn tại của các "hình vuông chết chóc" trong bộ nhớ chương trình. Bộ nhớ chương trình là một ma trận gồm $R$ hàng và $C$ cột, chỉ chứa các số không (`0`) và một (`1`). Một hình vuông chết chóc là một ma trận con hình vuông trong bộ nhớ (có kích thước lớn hơn $1 \times 1$), khi xoay $180^\circ$ vẫn giữ nguyên. Ví dụ, ma trận sau chứa 3 hình vuông chết chóc:  

$$
\begin{array}{c|c|c|c}
\texttt{101010} & \texttt{....10} & \texttt{......} & \texttt{101...} \\
\texttt{111001} & \texttt{....01} & \texttt{...00.} & \texttt{111...} \\
\texttt{101001} & \texttt{......} & \texttt{...00.} & \texttt{101...} \\
\hline
\text{input} & \text{hình vuông chết chóc} & \text{hình vuông chết chóc} & \text{hình vuông chết chóc} \\
\end{array}
$$

Mirko đang thắc mắc liệu có mối liên hệ nào giữa kích thước của hình vuông chết chóc lớn nhất và lỗi trong chương trình hay không. Hãy giúp Mirko bằng cách viết một chương trình nhận vào dữ liệu và in ra kích thước của hình vuông chết chóc lớn nhất. Kích thước của hình vuông chết chóc là số hàng (hoặc số cột) mà sát thủ bao gồm. Trong ví dụ trên, các kích thước hình vuông chết chóc lần lượt là $2$, $2$ và $3$.  

#### Input  
- Dòng đầu tiên chứa hai số nguyên $R$ và $C$ $(R, C \leq 300)$.  
- $R$ dòng tiếp theo, mỗi dòng chứa $C$ ký tự (`0` hoặc `1`), không có dấu cách.  

#### Output  
- In ra kích thước của hình vuông chết chóc lớn nhất trên một dòng.  
- Nếu không có hình vuông chết chóc nào, in ra `-1`.  

#### Example  

!!! question "Test 1"  
    ???+ "Input"  
        ```  
        3 6  
        101010  
        111001  
        101001  
        ```  
    ???+ "Output"  
        ```  
        3  
        ```  

!!! question "Test 2"  
    ???+ "Input"  
        ```  
        4 5  
        10010  
        01010  
        10101  
        01001  
        ```  
    ???+ "Output"  
        ```  
        3  
        ```  

!!! question "Test 3"  
    ???+ "Input"  
        ```  
        3 3  
        101  
        111  
        100  
        ```  
    ???+ "Output"  
        ```  
        -1  
        ```  
