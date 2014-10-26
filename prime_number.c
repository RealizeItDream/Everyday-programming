/*
   求100～200之间的素数
 */

#include<stdio.h>

int main()
{
    int i,j;
    for(i=101;i<=200;i+=2)
    {   
        int flg=1;
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
            flg=0;
        }
        if(flg==1)
        printf("%d ",i);
    }   
    printf("\n");
    return 0;
}
