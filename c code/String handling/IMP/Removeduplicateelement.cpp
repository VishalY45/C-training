///WAP to input string and remove the duplicated character from a string.
#include<Stdio.h>
#include<string.h>
int main()
{   int f=0,i,j;
	char ch[90];
	printf(" Enter a Arry stirng\n");//abcdrr
	gets(ch);
	int len=strlen(ch);
	printf("\nBefore removing string\n");
	printf("%s",ch);
	printf("\n After removing string\n");
	for(int i=0;i<len;i++)
	{  int f=0;
		for(int j=i+1;j<len;j++)
		{
			if(ch[i]==ch[j])
			{
			 f=1;
			 ch[j]=-1;
			}
		}
	if(f==0&&ch[i]!=-1)
	printf("%c\t",ch[i]);
	}
	}