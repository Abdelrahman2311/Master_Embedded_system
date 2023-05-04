/*
 ============================================================================
 Name        : lab3.c
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
	int a ,b;
	int minimum;
	printf("Enter two numbers: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&a,&b);

	minimum=(a<b)?a:b;
	printf("the minimum value is %d",minimum);
}
