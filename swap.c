#include<stdio.h>
int main()
{
	int num,n,data;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("enter a bit position\n");
	scanf("%d",&n);
	data=(num>>n)&1;
	printf("after get the bit is %d\n",data);
}

