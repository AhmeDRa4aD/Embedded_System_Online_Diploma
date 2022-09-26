/*
 * EX4.c
 *
 *  Created on: Sep 26, 2022
 *      Author: rashad
 */
#include <stdio.h>
struct SStudent
{
	char name[100];
	int roll;
	int marks;
};

int main(void)
{
	struct SStudent x[10];
	int i;
	printf("Enter information of students:\r\n");
	for(i = 0 ;i<sizeof(x)/sizeof(struct SStudent) ;i++)
	{

		printf("for roll number %d\n",i+1);
		printf("Enter name:");
		fflush(stdin); fflush(stdout);
		gets(x[i].name);
		printf("Enter marks:");
		fflush(stdin); fflush(stdout);
		scanf("%d" , &x[i].marks);
	}
	printf("Displaying Information of students:\r\n");
	for(i = 0 ;i<sizeof(x)/sizeof(struct SStudent) ;i++)
	{
		printf("Information for roll number %d\n",i+1);
		printf("name:%s\n",x[i].name);
		printf("Marks: %d",x[i].marks);
	}


	return 0;
}




