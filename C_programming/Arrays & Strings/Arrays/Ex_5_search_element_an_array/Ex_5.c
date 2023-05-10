/*
 ============================================================================
 Name        : Ex_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10];
	int n ,i , x ;
	printf("Enter no of Elements: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)          {
		printf("Enter arr%d : ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	for(i=0;i<n;i++)
	{
		if(x==arr[i])
		{
			printf("Number found at location: %d",i+1);
		}
	}
}

