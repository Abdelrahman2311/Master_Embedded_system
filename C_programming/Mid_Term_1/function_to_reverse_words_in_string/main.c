/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse_string (char s[] , unsigned int len);

int main(void) {
	char s[50];
	unsigned int len;
	printf("Enter a string: ");
	fflush(stdin);   fflush(stdout);
	gets(s);
	len = strlen (s);
	Reverse_string(s , len);
}

void Reverse_string (char s[] , unsigned int len)
{
	char R_S[50];
	int i=0 , k=0 , j=0;
	for(i=len -1 ; i>=0 ; i--)
	{
		if(s[i] == ' '){
			for(j=k-1 ; j>=0 ; j--)
			{
				printf("%c",R_S[j]);
			}
			printf(" ");
			k=0;
		}
		else
		{
			R_S[k] = s[i];
			k++;
		}
	}
	if(k!=0){
		for(j=k-1 ; j>=0 ; j--)
		{
			printf("%c",R_S[j]);
		}
	}
}
