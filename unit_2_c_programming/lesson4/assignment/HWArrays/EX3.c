/*
 * EX3.c
 *
 *  Created on: Sep 5, 2022
 *      Author: rashad
 */

#include <stdio.h>
int main(void) {
	int row, col;
	int m[10][10];
	int mt[10][10];
	int i, j;
	printf("Enter no. rows and columns of  matrix:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &row, &col);
	printf("\nEnter elements of matrix\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("Enter element a%d%d:", i + 1, j + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%d", &m[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("%d   ", m[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			mt[j][i] = m[i][j];
		}
	}
	printf("Transpose matrix:\n");
	for (i = 0; i < col; i++) {
		for (j = 0; j < row; j++) {
			printf("%d   ", mt[i][j]);
		}
		printf("\n");
	}
}
