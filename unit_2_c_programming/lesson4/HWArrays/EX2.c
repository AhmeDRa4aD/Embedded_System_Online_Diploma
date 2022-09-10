/*
 * EX2.c
 *
 *  Created on: Sep 5, 2022
 *      Author: ssd
 */
#include <stdio.h>
int main(void) {
	const int num;
	float arr[num] ,avg ,sum = 0 ;
	int i ;
	printf("Enter the number of data:");
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" ,&num) ;
	for(i = 0 ; i<num ; i++){
		printf("%d.Enter number:" ,i+1) ;
		fflush(stdin) ; fflush(stdout) ;
		scanf("%f" , &arr[i]) ;
		sum +=arr[i] ;
	}
	avg = sum/num ;
	printf("Average =%.2f" , avg );

}

