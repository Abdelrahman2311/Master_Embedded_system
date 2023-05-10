/*
 ============================================================================
 Name        : Ex_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c[100];
	int i ;

	printf("Enter a string: ");
	fflush(stdin);   fflush(stdout);
	gets(c);

	for(i=0;c[i]!='\0';i++);

	printf("length of string: %d",i);
}
