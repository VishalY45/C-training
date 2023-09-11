#include<stdio.h>
#include<string.h>
int main()
/*{
	char ch[90];
	printf(" Enter a sting\n");
	gets(ch);
	strupr(ch);
	printf("%s",ch);
}*/
{
	int count=0;
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	while(ch[count]!='\0')
	{
		if(ch[count]>=97&&ch[count]<=122)
		{
			ch[count]=ch[count]-32;
		}
		count++;
	}
	printf("%s",ch);
}
	