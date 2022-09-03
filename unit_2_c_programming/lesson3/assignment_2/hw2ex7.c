/*
 * hw2ex7.c
 *
 *  Created on: Sep 3, 2022
 *      Author: ssd
 */
#include <stdio.h>
int main() {
	int n;
	int factorial;
	int i;
	printf("Enter an integer:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	if (n > 0) {
		for (i = 1, factorial = 1; i <= n; i++) {
			factorial *= i;

		}
		printf("\n Factorial = %d", factorial);
	} else if (n = 0)

		printf("\n Factorial of zero  = 1");
	else
		printf("\n Error!!! Factorial of negative number does not exist.");

}

