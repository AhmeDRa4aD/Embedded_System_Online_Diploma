/*
 * EX3.c
 *
 *  Created on: Sep 21, 2022
 *      Author: Rashad
 */
#include <stdio.h>
void prime(int n1 , int n2);
void main(void){
	int n1, n2;
	printf("Enter first number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	printf("Enter second number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);
	prime(n1 , n2);
}
void prime(int n1,int n2){
	int i ,j,a = 1;
	printf("prime numbers is: ");

	for(i = n1 ; i<=n2;i++){
		for(j = 2 ; j<i ; j++ ){
			a = i%j;
			if(!a)
				break;

		}
		if (a)
			printf("%d ",i);
	}

}

