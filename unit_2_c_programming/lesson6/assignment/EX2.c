/*
 * EX2.c
 *
 *  Created on: Sep 26, 2022
 *      Author: rashad
 */
#include <stdio.h>
struct SDistance
{
	int feet;
	float inch;
};

int main(void)
{
	struct SDistance x,y,sum;
	printf("Enter information for the 1st distance:\n");
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x.feet);
	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.inch);
	printf("Enter the distance for the 2nd distance:\n");
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y.feet);
	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y.inch);
	sum.feet = x.feet + y.feet;
	sum.inch = x.inch + y.inch ;
	while(sum.inch > 12.0)
	{
		sum.inch -= 12.0;
		++sum.feet ;
	}
	printf("Sum of distances=%d'-%.1f\"",sum.feet,sum.inch);

}

