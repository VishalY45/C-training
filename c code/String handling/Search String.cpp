#include<string.h>
#include<stdio.h>
int main()
{
	char name[90],ch[90];
	printf("Enter a string\n");
	gets(name);
	printf("Enter a search key");
	gets(ch);
	int count=0,j,f=0,i;
	for(i=0;i<strlen(name)-strlen(ch);i++)
	{
		for(j=0;j<strlen(ch);j++)
		{
			if(name[i+j]!=ch[j])
			{
				break;
			}
		}
		if(j==strlen(ch))
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("String is found");
	}
	else
	{
		printf("String is not found\n");
	}
}