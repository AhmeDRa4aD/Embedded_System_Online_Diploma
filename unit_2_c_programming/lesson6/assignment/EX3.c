/*
 * EX3.c
 *
 *  Created on: Sep 26, 2022
 *      Author: rashad
 */
#include <stdio.h>
enum NUMcalculations {ADD , MULTIPLICATION , DIVISION};

struct SComplex
{
	float m_real;
	float m_imag;
};
struct SComplex add_complex(struct SComplex n1
		, struct SComplex n2 , enum NUMcalculations type );

int main(void)
{
	struct SComplex n1,n2 , sum;
	printf("for 1st complex number\n");
	printf("Enter the real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&n1.m_real,&n1.m_imag);
	printf("for 2nd complex number\n");
	printf("Enter the real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&n2.m_real,&n2.m_imag);
	sum = add_complex(n1,n2 , ADD);
	printf("%.1f+%.1fj" , sum.m_real,sum.m_imag);

	return 0 ;
}
struct SComplex add_complex(struct SComplex n1
		, struct SComplex n2 , enum NUMcalculations type )
{
	struct SComplex sum;
	switch (type)
	{
	case ADD:
	{
		sum.m_real = n1.m_real + n2.m_real ;
		sum.m_imag = n1.m_imag + n2.m_imag ;
		break;
	}
	case MULTIPLICATION:
	{
		sum.m_real = n1.m_real * n2.m_real ;
		sum.m_imag = n1.m_imag * n2.m_imag ;
		break;
	}
	case DIVISION:
	{
		sum.m_real = n1.m_real / n2.m_real ;
		sum.m_imag = n1.m_imag / n2.m_imag ;
		break;
	}
	}
	return sum;
}
