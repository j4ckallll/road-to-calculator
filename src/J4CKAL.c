/*
 ============================================================================
 Name        : J4CKAL.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{/*Write a small for loop (or just describe the logic) that calculates the sum of all
numbers from 1 to 10 (i.e., $1 + 2 + 3 + ... + 10$) and prints the final total.*/


	int n,sum=0;
	for(n=1;n<=10;n++)
	{
		sum=sum+n;

	}
	printf("%d",sum);

}
