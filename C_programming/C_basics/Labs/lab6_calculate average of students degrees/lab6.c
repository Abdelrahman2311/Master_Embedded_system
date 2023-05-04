/*
 ============================================================================
 Name        : lab5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i=1, num_students ;
	float degree , sum=0;
	float averge;

	printf("Enter numbers of students: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num_students);


	while(i<=num_students)
	{
		printf("Enter student (%d) degree: ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&degree);
		sum +=degree;
		i++;
	}
	averge=sum / num_students;
	printf("the Averge of students is %f",averge);
}




