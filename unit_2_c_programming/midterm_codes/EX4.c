/*
 * EX4.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 */
#include <stdio.h>
#include <string.h>
void reverse_digits(char arr[]);
void main(void){
	char arr[40];
	printf("Enter a number:");
	fflush(stdin); fflush(stdout);
	gets(arr);
	reverse_digits(arr);
}
void reverse_digits(char arr[]){
	int i , j;
	char b[40];
	for(i =strlen(arr)-1, j =0 ;j<strlen(arr), i>=0;j++, i--){
		b[j] = arr[i];
	}
	b[j] = '\0';
	printf("%s",b);
}
