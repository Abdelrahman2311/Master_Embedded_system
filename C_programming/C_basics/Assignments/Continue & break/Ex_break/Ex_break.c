/*
 ============================================================================
 Name        : Ex_break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float  sum=0 ,num;
	int n , i;

	printf("Enter numbers of inputs: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("Enter n%d: ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&num);

		if(num<0)
			break;

		sum+=num;
	}
	printf("average is %0.2f",sum/(i-1));
}
