/*
 ============================================================================
 Name        : Ex3.c
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

	char s[100] , r[100];
	int i ,len ;

	printf("Enter a string: ");
	fflush(stdin);   fflush(stdout);
	gets(s);

	len =strlen(s)-1;
	for(i=0;s[i]!='\0';i++)
	{
		r[i]=s[len-i];
	}
	r[i]=0;
	printf("Reverse of string: %s",r);
}
