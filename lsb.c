#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if( num&1)
	printf("LSB  %d is set\n",num);
	else
	printf("LSB %d is not set \n",num);
}

