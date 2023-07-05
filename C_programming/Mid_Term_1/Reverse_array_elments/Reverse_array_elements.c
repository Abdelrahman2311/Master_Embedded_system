/*
 ============================================================================
 Name        : Reverse_array_elements.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reverse_elements (unsigned int arr[], unsigned int size);

int main(void) {
	unsigned int arr[7] = {1,2,3,4,5,6,7};
	unsigned int size;
	size = sizeof(arr) / sizeof(arr[0]);
	Reverse_elements(arr , size);

}

void Reverse_elements (unsigned int arr[], unsigned int size)
{
	int i=0;
	unsigned int R_arr[10];

	printf("the main array is: ");
	for (i= 0 ; i< size ; i++)
	{
		R_arr[size-i-1] = arr[i];
		printf("%d ",arr[i]);
	}

	printf("\nthe Reverse array is: ");
	for (i= 0 ; i< size ; i++)
		printf("%d ",R_arr[i]);
}
