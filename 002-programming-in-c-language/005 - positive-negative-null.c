/*
    Positive, Negative or Null
    Make a program to read an integer x. Print the message "positivo" (Portuguese for "positive") if the value is positive. Print the message "negativo" (Portuguese for negative) if the value is negative. Print the message "nulo" (Portuguese for null) if the value is zero.

    Input
    The input consists of a line containing an integer.

    Output
    The output consists of one line containing a message.

    Constraints
    the value provided will have no absolute value higher than 1000.
    
    Input Samples	Output Samples
    7                   positivo
    -8                  negativo
    0                   nulo
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	scanf("%d",&x);

    if(x > 0) {
		printf("positivo\n");
	} else if(x < 0) {
		printf("negativo\n");
	} else {
		printf("nulo\n");
	}
	
	return 0;
}