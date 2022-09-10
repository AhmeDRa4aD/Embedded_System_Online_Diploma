/*
 * EX1.c
 *
 *  Created on: Sep 7, 2022
 *      Author: ssd
 */
#include <stdio.h>
#include <string.h>
int main(){
	char x[100]  ,alph , freq = 0;
	int i ;
    printf("Enter a string :") ;
    fflush(stdin) ; fflush(stdout) ;
    gets(x) ;
    printf("\nEnter a character to find frequency:") ;
    fflush(stdin) ; fflush(stdout) ;
    scanf("%c" , &alph) ;
    for(i = 0 ;i<sizeof(x);i++){
    	if(alph == x[i])
    		freq++ ;
    }
    if(freq)
    	printf("\nfrequency of %c=%d" ,alph ,freq );
    else
    	printf("\nthe character is not found!!!" ) ;
}

