/*
 * hw2ex1.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
//cprogram to check an integer number is even or odd

 #include <stdio.h>
 int main() {
 int i;
 printf("Enter an integer number you want to check: \n");
 fflush(stdin);
 fflush(stdout);
 scanf("%d", &i);
 if (i % 2 == 0)
 printf("\n %d is even. ", i);
 else
 printf("\n %d is odd. ", i);
 }

