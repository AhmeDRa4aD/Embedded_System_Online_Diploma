/*
 * EX2.c
 *
 *  Created on: Sep 13, 2022
 *      Author: Rashad
 */
#include <stdio.h>
int fact_calc(int n);
int main(void) {
	int n, fact;
	printf("Enter an positive number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	fact = fact_calc(n);
	printf("factorial of %d = %d", n, fact);
	return 0;
}
int fact_calc(int n) {
	int fact;
	if (n == 0)
		fact = 1;
	else if (n < 0) {
		printf("there is not a factorial for a negative number!!!!!! ");
	} else
		fact = n * fact_calc(n - 1);

	return fact;
}
