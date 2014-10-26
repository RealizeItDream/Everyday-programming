/*
   判断三角形的类型
  */
#include<stdio.h>
int main()
 {
     int a,b,c;
     printf("请输入三角形的三条边:\n");
     scanf("%d%d%d",&a,&b,&c);   
     if(a<b && b>c)
     {
          a+=b;
          b=a-b;
          a-=b;
      }
      else if(a<c && c>b)
      {
          a+=c;
          c=a-c;
          a-=c;
      }
      if(a*a==b*b+c*c)
         printf("此三角形为直角三角形\n");
       else if(a*a>b*b+c*c)
            printf("此三角形为钝角三角形\n");
            else
            printf("此三角形为锐角三角形\n");
    return 0;
}

