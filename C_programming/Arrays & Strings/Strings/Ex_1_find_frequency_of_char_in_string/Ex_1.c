/*
 ============================================================================
 Name        : Ex_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char c[100] , ch;
	int i , frq=0;

	printf("Enter your string: ");
	fflush(stdin);   fflush(stdout);
	gets(c);

	printf("Enter a char to find frequency: ");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&ch);

	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==ch)
			frq++;
	}
	printf("frequency of %c is: %d",ch,frq);
}
