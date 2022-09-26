/*
 * EX5.c
 *
 *  Created on: Sep 26, 2022
 *      Author: rashad
 */
#include <stdio.h>
#define area_circle(radius)  3.14*radius*radius

int main(void)
{
	int radius;
	float area;
	printf("Enter the radius of a circle:");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&radius);
	area = area_circle(radius);
	printf("area = %.2f",area);
}

