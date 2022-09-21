/*
 * EX9.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 */

#include <stdio.h>
#include <string.h>
void reverse_words(char arr[]);
int main(void){
	char arr[40];
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(arr);

	reverse_words(arr);

	return 0;
}
void reverse_words(char arr[]){
	int i , j, k;
	char b[40] , c[40];
	for(i =0 ; arr[i]!=' '; i++)
	{
		b[i] = arr[i];
	}
	b[i] = '\0';

	for( j =++i, k = 0 ; j<strlen(arr) ;k++ , j++)
	{
		c[k] = arr[j];
	}
	c[k] = '\0' ;

	strcat(c," ");
	strcat(c, b);
	printf("%s",c);
}

