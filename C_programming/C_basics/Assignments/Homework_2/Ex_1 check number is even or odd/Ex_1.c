/*
 ============================================================================
 Name        : Ex_1.c
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

	printf("Enter an integer you want to check:  ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&number);

	if(number%2==0)
	{
		printf("%d is even",number);
	}
	else if(number%2==1)
	{
		printf("%d is odd",number);
	}

}
