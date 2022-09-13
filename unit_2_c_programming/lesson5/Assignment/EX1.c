/*
 * EX1.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Rashad
 */
#include <stdio.h>
int check_prime(int n) ;
int main(void){
	int n1 , n2 , i ,count;
	printf("Enter two numbers(intervals):");
	fflush(stdin) ;
	fflush(stdout);
	scanf("%d %d" ,&n1,&n2);
    printf("prime numbers between %d and %d are :", n1 ,n2);
    fflush(stdin) ;
    fflush(stdout) ;
    for(i = n1+1 ; i<n2 ; i++){
    	count = check_prime(i) ;
    	if(count == 0 )
    		printf("%d " , i) ;

    }
    return 0 ;
}
int check_prime(int n){
	int j , count = 0 ;
	for(j=2; j<=n/2; j++){
		if(n%j == 0)
			count = 1 ;
	}
	return count ;
}

