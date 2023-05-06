/*
 ============================================================================
 Name        : Ex_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float x, y;
	char o;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&o);

	printf("Enter two numbers: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&x,&y);

	switch(o)
	{
	case '+':
		printf("%f + %f = %f", x , y , x+y);
		break;

	case '-':
		printf("%f - %f = %f", x , y , x-y);
		break;

	case'*':
		printf("%f * %f = %f", x , y , x*y);
		break;

	case '/':
		printf("%f / %f = %f", x , y , x/y);
		break;

	default:
		printf("wrong choice try again");
		break;
	}

}
