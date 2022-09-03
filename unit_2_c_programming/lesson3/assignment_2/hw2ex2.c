/*
 * hw2ex2.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
 //cprogram to vowel or consontant

 #include <stdio.h>
 int main() {
 char alphapet = 0;
 printf("Enter an alphapet: ");
 fflush(stdin);
 fflush(stdout);
 scanf("%c", &alphapet);
 switch (alphapet) {
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':

 printf("%c is a vowel. ", alphapet);

 break;
 default:

 printf("%c is a consonant.", alphapet);

 break;
 }
 }
