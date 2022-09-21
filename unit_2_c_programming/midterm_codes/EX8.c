/*
 * EX8.c
 *
 *  Created on: Sep 21, 2022
 *      Author: ssd
 */
#include <stdio.h>
void reverse(int arr[],int n);
int main(void){
	int arr[40] ,i, n;
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &n);
	for(i = 0 ; i<n ; i++)
	{
		printf("Enter elment %d :",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d" ,&arr[i]);
	}
	reverse(arr,n);

	return 0;
}
void reverse(int arr[], int n)
{
	int j ;
	for(j=n-1 ; j>=0 ; j--)
	{
		printf("%d ",arr[j]);
	}

}

