/*
 * hw1ex6.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */

//example 6
#include <stdio.h>
int main(void) {
	float a = 0, b = 0, temp;

	printf("##########Console-output### \n");
	printf("Enter value of a:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f", &a);
	printf("Enter value of b:");
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f", &b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping , value of a:%f \n" , a);
	printf("After swapping , value of b:%f", b);

}

