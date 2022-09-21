/*
 * EX5.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 */
#include <stdio.h>
void binary_ones_count(int n);
int main(void){
	int n ;
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	binary_ones_count(n);
	return 0;
}
void binary_ones_count(int n){
	int i ,k ,b = 0;
	printf("the binary of %d is :",n);
	for(i = 31 ; i>=0 ; i--){
		k = n>>i;
		if(k&1){
			b++;
			printf("1");
		}
		else
			printf("0");
	}
	printf("\nthe number of ones  = %d",b);
}
