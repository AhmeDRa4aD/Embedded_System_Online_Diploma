/*
 * EX1.c
 *
 *  Created on: Sep 5, 2022
 *      Author: Rashad
 */
#include <stdio.h>
int main(void) {
	int i, j;
	float m1[2][2];
	float m2[2][2];
	float sum[2][2];
	printf("Enter the elements of first matrix");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\nEnter the value of element a%d%d:", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &m1[i][j]);
		}

	}
	printf("\r\nEnter the elements of second matrix");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("\nEnter the value of element b%d%d:", i, j);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &m2[i][j]);
		}

	}
	printf("\nsum of Matrix");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			sum[i][j] = m1[i][j] + m2[i][j];

		}

	}
	for (i = 0; i < 2; i++) {
		printf("\n");
		for (j = 0; j < 2; j++) {
		printf("%.1f \t" , sum[i][j]);

		}

	}
}

