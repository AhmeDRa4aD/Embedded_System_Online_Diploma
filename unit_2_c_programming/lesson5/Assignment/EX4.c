/*
 * EX4.c
 *
 *  Created on: Sep 13, 2022
 *      Author: ssd
 */
#include<stdio.h>
int power_calc(int x, int y);
int main(void) {
	int base, power ,  result;
	printf("Enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &power);
	result = power_calc(base , power);
	printf("%d" , result);

}
int power_calc(int x, int y){
	int result ;
	if (y ==0)
		return 1 ;
	else if(y>0){
		result = x*power_calc(x ,y-1) ;
	}

	return result ;
}
