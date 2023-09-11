#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	int len=strlen(ch);
	int s=0;
	for(int e=0;e<=len;e++)
	{
		if(ch[e]==' '|| ch[e]=='\0')
		{
			int j=e-1;
			for(int i=s;i<j;i++)
			{
				
						char temp=ch[i];
		                 ch[i]=ch[j];
		                  ch[j--]=temp;
			
			}
			s = e+ 1;
		}
	}
	printf("Reversed string: %s\n", ch);
	
}