/*
 ============================================================================
 Name        : Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr[50];
	float sum=0;
	int i,n;

	printf("Enter the numbers of data: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	if(n>50 || n<0)
	{
		printf("Error! number should be in range(1 to 50)\n");
		printf("Enter the number again: ");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&n);
	}

	for(i=0;i<n;i++)
	{
		printf("Enter number %d: ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	printf("The average= %0.1f",sum/n);
}
