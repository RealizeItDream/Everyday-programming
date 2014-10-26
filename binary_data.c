/*
  十进制转化为二进制
 */

#include<stdio.h>

int main()
{
    int c;
    scanf("%d",&c);
    int a[32];
    int i=0,j=0;
    for(i=0;i<32;i++)
       {
           a[i]=c%2;
           c/=2;
       }
    for(i=31;i>=0;i--)
    {   
        printf("%d",a[i]);
        j++;
        if(j%4==0)
            printf(" ");
    }
    printf("\n");
    return 0;
}

