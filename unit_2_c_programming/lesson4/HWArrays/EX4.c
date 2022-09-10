/*
 * EX4.c
 *
 *  Created on: Sep 6, 2022
 *      Author: rashad
 */
#include <stdio.h>
int main(void) {
	int arr[20]  , no_elements , element , loc , i;
	printf("Enter no of elements:") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&no_elements);
	printf("Enter array  elements:") ;
	fflush(stdin) ; fflush(stdout) ;
	for(i = 0 ; i<no_elements ; i++){
		scanf("%d" , &arr[i]) ;
	}
	printf("Enter the element to be inserted:" ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" ,&element );
	printf("Enter the location:" ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" ,&loc );
	for(i =no_elements  ; i>=loc ; i--){
		arr[i] = arr[i-1] ;
	}
	arr[loc-1] = element ;
	for(i = 0 ;i <=no_elements ;i++)
		printf("%d " , arr[i]) ;


	return 0;

}

