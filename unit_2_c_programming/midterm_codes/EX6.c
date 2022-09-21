/*
 * EX6.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 */
#include <stdio.h>
void unique_number(int arr[], int n);
int main(void){
	int arr[40] , n , i;
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&n);
	printf("enter the elemnts of the array:");
	fflush(stdin); fflush(stdout);
	for(i =0 ; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	unique_number(arr , n);

	return 0;
}
void unique_number(int arr[], int n){
	int i, k =0 ;
	for(i = 0 ; i <n ; i++){
		k^=arr[i];
	}
	printf("The unique number is :%d" , k);
}

