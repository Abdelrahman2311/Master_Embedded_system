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
	int arr[10];
	int n ,i , e , l;
	printf("Enter no of Elements: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)          {
		printf("Enter arr%d : ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&e);
	printf("Enter the location: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&l);
	arr[l]=e;

	for(i=0;i<n;i++)
		{
			printf("%d \t",arr[i]);
		}


}
