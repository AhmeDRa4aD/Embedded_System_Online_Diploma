/*
 * EX5.c
 *
 *  Created on: Sep 7, 2022
 *      Author: ssd
 */
#include <stdio.h>
int main(void){
	int arr[20] , no_elements , elem_search , location ,i ;
	printf("Enter no of elements:") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" , &no_elements) ;
	printf("Enter the values of array elements\n") ;
	fflush(stdin) ; fflush(stdout) ;
	for(i = 0 ; i <no_elements ; i++)
		scanf("%d" , &arr[i]) ;
	printf("Enter the elements to be searched:") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" ,&elem_search ) ;
	for(i = 0 ; i<no_elements ; i++){
		if(elem_search == arr[i])
			location = i+1;
		else
			location = 0 ;


	}
	if(location)
	   printf("Number found at the location = %d" ,location);
	else
		printf("Number is not  found at array");


}



