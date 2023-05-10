/*
 ============================================================================
 Name        : lab.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float degree[10];
	int i ;

	for(i=0;i<10;i++)
	{
		printf("Enter student %d degree: ",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%f",&degree[i]);
	}

	for(i=0;i<10;i++)
	{
		printf("\n student %d degree is: %f",i+1,degree[i]);

	}
}
