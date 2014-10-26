/*
   n进制转化为十进制
 */

#include<stdio.h>

int pow_xy(int x,int y)      //定义一个求次方的函数
{
    int p=1;
    int j=1;
    for(j=1;j<=y;j++)
        p*=x;
    return p;
}

void main()
{
    int i,j;
    int c,n;
    int s=0;
    char a[32]={0};
    printf("Please enter number type:");
        scanf("%d",&n);
         printf("please enter a number:");
    switch(n)
    {
        case 8:
            scanf("%o",&c);
            break;
        case 16:
            scanf("%x",&c);
            break;
    }
    for(i=0;i<32;i++)
    {
       a[i]=c%n;
       c/=n;
    }

    for(j=31;j>=0;j--)
    {
        s=s+a[j]*pow_xy(n,j);
    }
    printf("该%d进制数转化为十进制数为:\n%d\n",n,s);
}
