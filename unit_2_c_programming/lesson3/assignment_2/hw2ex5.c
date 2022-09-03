/*
 * hw2ex5.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
//cprogram to check  whether a character is an alphapet or not
 #include <stdio.h>
 #include <conio.h>
 int main() {
 char c;
 printf("Enter a character : ");
 fflush(stdin);
 fflush(stdout);
 scanf("%c", &c);
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

 printf(" \n %c the character is an alphapet");

 else
 printf(" \n %c the character is not an alphapet");

 }

