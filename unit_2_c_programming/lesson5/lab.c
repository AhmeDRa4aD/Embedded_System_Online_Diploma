/*
 * EX1.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Rashad
 */
#include<stdio.h>
void haram(int x[], int n) { // @suppress("No return")
	int i, j = 0;
	while (j < n) {

		for (i = j++; i < n; i++)
			printf("%d  ", x[i]);
        printf("\n") ;
	}
}
int main(void) {
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	haram(arr, 10);
}

