/*
 * test.c
 *
 *  Created on: Sep 20, 2022
 *      Author: Rashad
 */
#include <stdio.h>
#include <math.h>
void root(int n);
int main(void){
	int num ;
	printf("INPUT:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	root(num);


	return 0;
}
void root(int  n){
	double b ;
	b = sqrt(n);
	printf("square root = %0.3lf" ,b);
}
