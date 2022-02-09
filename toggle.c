#include<stdio.h>
int main()
{
	int num,n,data;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter a bit position\n");
	scanf("%d",&n);
	data=num^(1<<n);
	printf("after toggle the bit %d\n",data);
}

