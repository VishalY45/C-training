#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90];
	printf("Enter a string\n");
	gets(ch);
	int i,j;
	for(i=0;i<strlen(ch);i++)
	{
		for(j=i+1;j<strlen(ch);j++)
		{
			if(ch[i]==ch[j])
			{
				printf("%c",ch[i]);
				ch[j]=-1;
				break;
			}
		}
	}
}