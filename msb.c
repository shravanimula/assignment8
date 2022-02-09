#include<stdio.h>
#define bits sizeof(int) *8
int main()
{
	int num,data;
	printf("enter a number\n");
	scanf("%d",&num);
	data=1<<(bits-1);
	if(num&data)
	printf("MSB of %d is set\n",num);
	else
	printf("MSB of %d is not set\n",num);
}

