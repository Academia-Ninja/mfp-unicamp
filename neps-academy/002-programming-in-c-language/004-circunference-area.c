/*
    Bino wants to calculate the area of a circle and asked for your help.

    Make a program to read a real value R representing the radius of the circle that Bino wants to calculate the area. Print the area of the circumference using pi as 3.1416.

    Input
    The input consists of a line containing the value of the radius of the circle.

    Output
    The output consists of a single line containing the area of the circumference with two precision digits.

    Constraints
    The values provided will not be negative or greater than 10000
    
    Input Samples	Output Samples
    2               12.57
    7               153.94
*/

#include <stdio.h>

int main(){    	
    const float pi = 3.1416;
	float r;
	
	scanf("%f", &r);
	
	printf("%.2f", (pi*r*r));

    return 0;
}