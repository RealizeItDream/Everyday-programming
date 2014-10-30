#include<stdio.h>

unsigned reverse_bit(unsigned value)
{
    int i,a;
	int ch=0;
	for(i=0;i<31;i++)
	{
		a=value&1;
	  value>>=1;
		ch|=a;
		ch<<=1;
	}	
	return ch;
}
int main()
{
	int n,m;
	printf("请输入一个无符号整数:");
	scanf("%d",&m); 
	n=reverse_bit(m);
	printf("二进制翻转后的值为%u\n",n);
	return 0;
}
