#include<stdio.h>
#include<string.h>
int main()
/*{
	char ch[90];
	printf("Enter a string\n");
	gets(ch);
	strrev(ch);
	printf("%s",ch);
}*/
{
	int l,m,s=0,e;
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	l=strlen(ch);
	e=l-1;
	m=l/2;
	for(s=0;s<m;s++)
	{
		char temp=ch[s];
		ch[s]=ch[e];
		ch[e]=temp;
		e--;
		
	}
	printf("%s",ch);
}