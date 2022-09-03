/*
 * hw2ex4.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */

//program to check a Number is positive or negative
 #include <stdio.h>
 int main() {
 float number;
 printf("Enter a number:");
 fflush(stdin);
 fflush(stdout);
 scanf("%f", &number);
 if (number > 0)
 printf("\n %f is positive. ", number);
 else if (number == 0)
 printf("\n %f is zero. ", number);
 else
 printf("\n %f is negative. ", number);

 }
