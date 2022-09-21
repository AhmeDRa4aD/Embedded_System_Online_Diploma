/*
 * EX10.c
 *
 *  Created on: Sep 21, 2022
 *      Author: rashad
 */
#include <stdio.h>
int max_ones(int num);
int main(void)
{
	int num , a;
	printf("Enter a number:");
	fflush(stdin) ; fflush(stdout);
	scanf("%d" , &num);
	a = max_ones(num);
	printf("max number of ones  = %d",a);
	return 0;
}
int max_ones(int num)
{
	int count = 0, max = 0,a[40], i ,j,k;
	printf("The binary of %d :" ,num);
	for(i = 15 ; i>=0 ; i--)
	{
		k = num>>i;
		if(k&1)
		{
			printf("1");
			a[i] = 1;
		}
		else
		{
			printf("0");
			a[i] = 0;
		}
	}
	printf("\n");
	for(i = 0 ; i <=15; i++)
	{
		if(max<count)
			max = count;
		count = 0;

		if((a[i]==0)&&(a[i+1]==1))
		{
			for(j = i+1 ; j<16 ; j++)
			{
				if(a[j] ==1)
					count++;
				else
					break ;
			}
		}
	}

	return max;
}

