/*
 * EX7.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 *
 */
#include <stdio.h>
int summation(int);
int main(void){
	int sum;
	sum  = summation(100);
	printf("sum = %d" , sum);

	return 0;
}
int summation(int n){
	int  sum  ;
	if(n==0)
		return 0;

	sum =n + summation(--n) ;

	return sum;
}
