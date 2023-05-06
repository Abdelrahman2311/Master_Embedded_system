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

	char alph;

	printf("Enter a character: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&alph);

	if((alph>='a' && alph<='z') || (alph>='A' && alph<='Z'))
		printf("%c is alphabet",alph);

	else
		printf("%c is not alphabet",alph);
}
