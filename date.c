/*
    求某年某月某日是该年的第几天    
 */

#include<stdio.h>

int main()
{
	int i=0,j=0,c=0;
	int year,month,day;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	printf("please enter a date:");
	scanf("%d%d%d",&year,&month,&day);
    
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		for(i=0;i<month-1;i++)
			c+=a[i];
	}
	else
	{
		for(j=0;j<month-1;j++)
	        c+=b[j];
	}
	printf("%d年%d月%d日是该年的第%d天.\n",year,month,day,c+day);
    return 0;	
}
