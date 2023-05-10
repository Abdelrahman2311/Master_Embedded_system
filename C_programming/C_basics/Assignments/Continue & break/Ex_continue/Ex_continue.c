/*
 ============================================================================
 Name        : Ex_continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num , product=1;
	int i;

	for(i=1;i<=4;i++)
	{
		printf("Enter num%d: ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&num);

		if(num==0)
			continue;

		product*=num;
	}
	printf("product= %d",product);
}
