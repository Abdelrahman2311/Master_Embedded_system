/*
 ============================================================================
 Name        : lab4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float radius;
	float area;
	float circum;
	char choice;


	printf("Enter your radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);

	printf("Enter your choice (a to print the area, b to print circumference):  ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);

	switch(choice)
	{
	case 'a':
	{
		area=3.14*radius*radius;
		printf(" Area is  %f",area);
	}
	break;

	case 'b':
	{
		circum=2*3.14*radius;
				printf(" circumference is  %f",circum);
	}
	break;
	default:
	{
		printf(" wrong choice ");
	}
	break;
	}
}
