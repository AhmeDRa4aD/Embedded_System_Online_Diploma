/*
 * Ex_break.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Rashad
 */
#include<stdio.h>
int main(void){
	int n , i;
	float num , avg = 0, sum =0  ;
	printf("Maximum number of inputs:\n");
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d" ,&n ) ;
	for(i = 0 ; i<n ; i++){
		printf("Enter n%d:",i+1);
		fflush(stdin) ; fflush(stdout) ;
		scanf("%f" ,& num) ;
		if(num >=0)
		   sum+=num ;
		else
			break ;


	}
	avg= sum / n ;
	printf("Average=%.4f" , avg) ;

}

