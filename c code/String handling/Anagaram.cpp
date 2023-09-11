#include<stdio.h>
#include<string.h>
int main()
{
	int k=-1,i;
	char ch[90],ch1[90];
	printf(" ENter a string\n");//
	gets(ch);
	int f=0;
	int len=strlen(ch);
	printf(" Enter a second string\n");
	gets(ch1);
	int len2=strlen(ch1);
	if(len==len2)
	{
	
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(ch[i]==ch1[j])
			{
				f=1;
				ch1[j]=k;
				break;
			}
			else
			{
				f++;
				
			}
		}
	}
		if(f==1&&ch1[i]!=k)
		{
		  printf(" String is anagram");	
		}
		else
		{
			printf(" String is not anagram");
		}
	
}
else
{
	printf("String is not anagram");
}
	
	
	
}