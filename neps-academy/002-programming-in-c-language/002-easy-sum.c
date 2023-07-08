/*
    Make a program to read two integer values A and B 
    and print the result of the expression (A+B).

    Input
    The input consists of two lines. The first line contains the integer 
    A and the second line contains the integer B.

    Output
    The output consists of a line containing the result of the expression 
    (A+B).

    Constraints
    The given integers will have no absolute value greater than 1000.
    
    Input Samples	Output Samples
    2
    3                   5
    -2
    3                   1
    10
    89                  99
*/

#include <stdio.h>

int main (){
    int A, B;
	
    scanf("%d", &A);
	scanf("%d", &B);
    
	printf("%d", A+B);
}