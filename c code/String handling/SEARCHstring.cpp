#include<stdio.h>
#include<string.h>
/*int main()
{
	char ch[90],skey[10];
	printf(" Enter a string\n");
	gets(ch);
	printf(" Enter a skey string\n");
	gets(skey);
	int f=0;
	for(int i=0;i<=strlen(ch)-strlen(skey);i++)
	{
		int j;
		for(j=0;j<strlen(skey);j++)
		{
			if(ch[i+j]!=skey[j])
			{
				break;
			}
		}
		if(j==strlen(skey))
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf(" String is found");
	}
	else
	{
		printf(" String is not found");
	}
}*/

int main()
{
	char ch[90],skey[10];
	printf(" Enter a sting\n");
	gets(ch);
	printf(" Enter a skey string\n");
	gets(skey);
	int f=0;
	for(int i=0;i<strlen(ch)-strlen(skey);i++)
	{
		int j=0;
		for(j=0;j<strlen(skey);j++)
		{
			if(ch[i+j]!=skey[j])
			{
				break;
			}
		}
		if(j==strlen(skey))
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf(" Stirng is found");
	}
	else
	{
		printf(" String is not found");
	}
}