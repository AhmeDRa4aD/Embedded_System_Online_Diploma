/*
 * EX1.c
 *
 *  Created on: Sep 26, 2022
 *      Author: rashad
 */
#include <stdio.h>
struct SStudent
{
	char name[100];
	int roll;
	float marks;
};

int main(void)
{
	struct SStudent x;
	printf("Enter information of students:\r\n");
	printf("Enter name:");
	fflush(stdin); fflush(stdout);
	gets(x.name);
	printf("Enter roll number:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x.roll);
	printf("Enter marks:");
	fflush(stdin); fflush(stdout);
	scanf("%f" , &x.marks);
	printf("Displaying Information:\n");
	printf("name:%s\n",x.name);
	printf("Roll:%d\n",x.roll);
	printf("Marks: %.2f",x.marks);


	return 0;
}


