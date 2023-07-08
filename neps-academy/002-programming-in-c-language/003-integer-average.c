/*
    Make a program to read two integer values A and 
    B and print the integer average of the values A 
    and B.

    Input
    The input consists of two lines. The first line 
    contains the integer A and the second line 
    contains the integer B.

    Output
    The output consists of a line containing the integer 
    average of A and B.

    Constraints
    The given integers have no absolute value higher 
    than 1000.
    
    Input Samples	Output Samples
    2
    2                   2
    5
    6                   5
    1
    14                  7

*/

#include <stdio.h>

int main(){
	int A, B;
	scanf("%d",&A);
	scanf("%d",&B);
	
    printf("%d\n", (A+B)/2);
	
	return 0;
}

