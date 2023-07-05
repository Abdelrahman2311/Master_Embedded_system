/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int Unique_Number (unsigned int arr[], unsigned int size);

int main(void) {
	unsigned int arr[7]= {2,6,3,5,6,2,3};
	unsigned int size;
	size = sizeof(arr) / sizeof(arr[0]);

	printf("Unique number is : %d", Unique_Number(arr , size));

}

unsigned int Unique_Number (unsigned int arr[], unsigned int size)
{
	int i=0, k=0;
	for(i=0 ; i< size ; i++)
	{
		k = k ^ arr[i];
	}
	return k;
}
