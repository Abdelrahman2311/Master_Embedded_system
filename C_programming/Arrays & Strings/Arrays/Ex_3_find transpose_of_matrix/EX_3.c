/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10][10] , t[10][10], i,j ,r,c;

	printf("Enter Rows and columns of matrix: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&r,&c);

	printf("Enter Elements of Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Element of a%d%d: ",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);

		}
		printf("\n");
	}

	printf("transpose matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];
			printf("%d \t",t[i][j]);
		}
		printf("\n");
	}
}
