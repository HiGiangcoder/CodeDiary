### NPUZZLE

N-puzzle is a puzzle that goes by many names and has many variants. In this problem we will use the 15-puzzle. It consists of a 4-by-4 grid of sliding squares where one square is missing. The squares are labeled with uppercase letters 'A' through 'O', with the desired layout as follows:

![table problem 2](prob2.png)

It  can  be  useful  (for  example,  when  solving  the  puzzle  using  a  computer)  to  define  the  "scatter"  of  a puzzle  as  the  sum  of  distances  between  each  square's  current  position  and  its  position  in  the  desired layout. The distance between two squares is their Manhattan distance (the absolute value of the sum of differences between the two rows and the two columns). 

Write a program that calculates the scatter of the given puzzle. 


#### Input:
Four lines of input contain four characters each, representing the state of the puzzle. 


#### Output:
!!! question "Test 1"
    ???+ "Input"
        ```
        ABCD
        EFGH
        IJKL
        M.NO
        ```
    ???+ "Output"
        ```
        2
        ```

!!! question "Test 2"
    ???+ "Input"
        ```
        .BCD
        EAGH
        IJFL
        MNOK
        ```
    ???+ "Output"
        ```
        6
        ```
        