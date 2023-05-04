/*
 ============================================================================
 Name        : lab5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i;
	int sum=0;

	for(i=0;i<100;i++)
	{
		sum += i;
	}
	printf("the summation between (1 to 99) is  %d ",sum);
}
