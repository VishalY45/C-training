#include<stdio.h>
#include<string.h>
int f=0,k=-1,i;
char anagram(char ch[],char ch1[])
{
	int len=strlen(ch);
	printf("%d",len);
	int len2=strlen(ch1);
if(len==len2)
	{
	
	for(int i=0;i<len;i++)//vishgf
	{
		for(int j=0;j<len;j++)  //
		{
			if(ch[i]==ch1[j])
			{
				f=1;
				ch1[j]=k;
				break;
			}
			else
			{
				f=0;
				
			}
		}
	}
		if(f==1&&ch1[i]!=k)
		{
			return 1;
		  //printf(" String is anagram");	
		}
		else
		{
			return 0;
		}
	
}
else
{
	return 0;
}
}
int main()
{
	char ch[90],ch1[90];
	printf(" ENter a string\n");
	gets(ch);
	int f=0;

	printf(" Enter a second string\n");
	gets(ch1);
	int len2=strlen(ch1);
	char result=anagram(ch,ch1);
	if(result==1)
	{
		printf(" String is anagram\n");
	}
	else
	{
		printf(" String is not anagram");
	}
}