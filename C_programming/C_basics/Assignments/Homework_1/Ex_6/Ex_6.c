/*
 ============================================================================
 Name        : Ex_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// swap two numbers
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a ,b ,c;
	//Enter value of a
	printf("Enter value of a: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&a);

	//Enter value of b
	printf("Enter value of b: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&b);

	//swap values of a & b
	c=a; a=b; b=c;

	//values after swapping
	printf("After swapping, the value of a= %f\n",a);
	printf("After swapping, the value of b= %f",b);


}
