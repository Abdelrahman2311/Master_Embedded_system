/*
 ============================================================================
 Name        : squre_root.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Squre_Root (float number);

int main(void) {
	float number ;
	printf("Enter a Number: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&number);

	printf("Square root of %0.2f = %0.3f", number , Squre_Root(number));


}

float Squre_Root (float number)
{
	return sqrt(number);
}

