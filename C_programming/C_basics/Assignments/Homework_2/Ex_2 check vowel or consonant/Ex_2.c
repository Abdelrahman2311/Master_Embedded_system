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

	char alph;

	printf("Enter the Alphabet: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&alph);

	if(alph=='a' | alph=='e' | alph=='i' | alph=='o' | alph=='u')
	{
		printf("%c is a vowel",alph);
	}
	else
	{
		printf("%c is a consonant",alph);
	}
}
