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

int main(void) {

	float m[3][3];
	float tm[3][3];
	int i,j;
	//Enter the matrix element
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the item (%d,%d): ",i,j);
			fflush(stdin);   fflush(stdout);
			scanf("%f",&m[i][j]);
		}
	}

	printf("\n\n");

	//Print the matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%0.2f\t",m[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	//transpose the matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tm[i][j]=m[j][i];
			printf("%0.2f\t",tm[i][j]);
		}
		printf("\n");
	}

}
