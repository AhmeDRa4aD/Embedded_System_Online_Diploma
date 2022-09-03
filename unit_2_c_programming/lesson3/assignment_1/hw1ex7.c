/*
 * hw1ex7.c
 *
 *  Created on: Sep 4, 2022
 *      Author: ssd
 */

/*
 * hw1ex7.c
 *
 *  Created on: Sep 4, 2022
 *      Author: ssd
 */
#include <stdio.h>
int main(void){
	float a = 0 ,b = 0 ;
	printf("##########Console-output### \n");
	printf("Enter value of a:");
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f" , &a);
	printf("Enter the value of b:");
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f" , &b);
	a = a+b ;
	b = a-b ;
	a = a-b ;
	printf("After swapping , value of a:%.2f\n" , a) ;
	printf("After swapping , value of b:%.2f" ,b );

}


