/*
 ============================================================================
 Name        : Ex_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x , fact=1 , i;

	printf("Enter an integer: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	if(x>0)
	{
		for(i=1;i<=x;i++){
			fact *= i;}
		printf("factorial= %d",fact);
	}
	else
		printf("Error!!! factorial of negative number does not exist");
}
