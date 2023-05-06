/*
 ============================================================================
 Name        : Ex_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number;

	printf("Enter a number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&number);

	if(number>0)
		printf("%d is positive",number);
	else if(number<0)
		printf("%d is negative",number);
	else
		printf("%d is zero",number);
}
