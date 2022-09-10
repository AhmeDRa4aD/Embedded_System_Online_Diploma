/*
 * EX_continue.c
 *
 *  Created on: Sep 9, 2022
 *      Author: Rashad
 */
#include <stdio.h>
int main(void){
	int num , prod = 1 , i;
	for(i = 0 ;i<4 ;i++){
		printf("Enter num%d:" , i+1);
		fflush(stdin ) ; fflush(stdout) ;
		scanf("%d" , &num) ;
		if(num == 0 )
			continue ;
		else
			prod*=num ;

	}
    printf("product=%d"  ,prod  );
}

