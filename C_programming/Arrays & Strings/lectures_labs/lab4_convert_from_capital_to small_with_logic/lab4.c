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
#include <string.h>

int main(void) {
	char names[]="AhmeD";
	//Easy way with strupr and strlwr and strlen
	printf("%s \t",strupr(names));
	printf("%s \n",strlwr(names));


	//without strupr and strlwr and strlen
	char capital='A' , small='a';
	int i=0;
	char diff=capital-small;

	while(names[i]!=0)
	{
		names[i]+=diff;
		printf("%c",names[i]);
		i++;
	}

	i=0;
	printf("\t");

	while(names[i]!=0)
	{
		names[i]-=diff;
		printf("%c",names[i]);
		i++;
	}

	while(names[i]!=0)
		{
			names[i]+=diff;
			printf("%c",names[i]);
			i++;
		}
	//without  strlen
	i=0;
	while(names[i]!=0)
			{
				i++;
			}
	printf("\n %d",i);
}
