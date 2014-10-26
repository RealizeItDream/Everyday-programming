/*
   求两个正整数的最大公约数和最小公倍数
 */

#include<stdio.h>

int main()
{
    int p,r,n,m;
    printf("please enter n,m:"); 
    scanf("%d",&n);
    scanf("%d",&m);
    if(n<m)
    {   
        n+=m;
        m=n-m;
        n-=m;   
    }   
    p=n*m;  
    while(m!=0) 
    {   
        r=n%m;
        n=m;
        m=r;
    }
    printf("公约数=%d\n",n);
    printf("公倍数=%d\n",p/n);
    return 0;
}
