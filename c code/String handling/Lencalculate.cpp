v#include<stdio.h>
#include<string.h>
int main()
/*
{
	int count=0;
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	while(ch[count]!='\0')
	{
		count++;
	}
	printf("len is%d",count);
}
*/
{
	char ch[90];
	printf(" Enter a string");
	gets(ch);
	int l=strlen(ch);
	printf("%d",l);
}