/*
 * EX3.c
 *
 *  Created on: Sep 9, 2022
 *      Author: ssd
 */
#include <stdio.h>
#include <string.h>
int main(void){
	char x[20] , i  ,len, temp ;
	printf("Enter the string :");
	fflush(stdin) ; fflush(stdout) ;
	gets(x) ;
	len = strlen(x) ;
	for(i = 0 ; i<=len/2 ; i++ , len--){
		temp = x[i] ;
		x[i] = x[len-1] ;
		x[len-1] = temp ;
	}
	printf("Enter the string :%s" , x);


}

