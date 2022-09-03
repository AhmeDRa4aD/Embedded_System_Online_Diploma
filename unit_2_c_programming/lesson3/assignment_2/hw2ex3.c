/*
 * hw2ex3.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
//cprogram to find the largest number among three numbers
 #include<stdio.h>
 int main() {
 float no1;
 float no2;
 float no3;

 printf("Enter three numbers:");
 fflush(stdin);
 fflush(stdout);
 scanf("%f %f %f", &no1, &no2, &no3);

 if (no1 > no2 && no1 > no3)
 printf("\n largest number = %f", no1);
 else if (no2 > no1 && no2 > no3)
 printf("\n largest number = %f", no2);
 else if(no3>no1 && no3>no2)
 printf("\n largest number = %f", no3);
 else
 printf("\n the three numbers are equal");
 }

