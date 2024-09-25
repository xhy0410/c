#include<stdio.h>
int main(void)
{
	float salary;
	
	printf("\aenter ur desired monthly salary:");
	printf(" $_______\b\b\b\b\b\b\b"); //以一个空格开始 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,
	salary*12.0);
	printf("\rGee!\n");
	
	return 0;	
}
