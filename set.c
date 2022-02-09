#include<stdio.h>
int main()
{
	int num,n,data;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter a bit position\n");
	scanf("%d",&n);
	data=(1<<n)|num;
	printf("after set the bit %d\n",data);
}

