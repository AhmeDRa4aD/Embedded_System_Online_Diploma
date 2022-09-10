/*
 * EX2.c
 *
 *  Created on: Sep 9, 2022
 *      Author: rashad
 */
#include <stdio.h>
int main(void){
	char x[20];
	int i , len = 0;
	printf("Enter a string:");
	fflush(stdin) ; fflush(stdout) ;
	gets(x) ;
	for(i = 0 ; i<20 ,x[i]!='\0' ; i++){
		if(x[i])
			len++;
	}
	printf("the length of character is :%d" ,len ) ;

}

