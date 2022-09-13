/*
 * EX3.c
 *
 *  Created on: Sep 13, 2022
 *      Author: ssd
 */
#include<stdio.h>
void reverse();
int main(void) {

	printf("Enter a sentence:");
	fflush(stdin) ; fflush(stdout) ;
	reverse();
	return 0;
}
void reverse() {
	 char x;
	 scanf("%c" ,&x) ;
	 if(x != '\n'){
	    reverse();
	    printf("%c",x);
	 }

}
