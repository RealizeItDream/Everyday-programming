/*
  替换字符串中的大写字母为小写字母
*/

#include<stdio.h>

void main()
{   
	int ch;
	printf("请输入字符串:\n");
    while((ch=getchar()) != EOF)
	{
		if((ch>='A')&&(ch<='Z'))
			ch+=32;
		putchar(ch);
	}
	putchar('\n');
}
