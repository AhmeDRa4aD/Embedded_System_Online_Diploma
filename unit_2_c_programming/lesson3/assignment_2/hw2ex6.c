/*
 * hw2ex5.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
//cprogram to calculate the sum of natural numbers
 #include <stdio.h>
 int main() {
 int n;
 int sum = 0;
 int i;
 printf("Enter an integer:");
 fflush(stdin);
 fflush(stdout);
 scanf("%d", &n);
 for (i = 0, sum = 0; i <= n; i++) {
 sum += i;

 }
 printf("\n Sum = %d", sum);
 }

