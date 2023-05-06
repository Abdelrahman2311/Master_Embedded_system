/*
 ============================================================================
 Name        : Ex_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	float a ,b, c;

	printf("Enter three numbers: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);

	if(a>=b && a>=c)
		printf("largest number is %f",a);

	else if(b>=a && b>=c)
		printf("largest number is %f",b);

	else
		printf("the largest value is %f",c);

}
