#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	int len =strlen(ch);
	int start=0;
	for(int end=0;end<=len;end++)
	{
		if(ch[end]==' '|| ch[end]=='\0')
		{
			int j=end-1;
			for(i=start;i<j;i++)
			{
				int temp=ch[i];
				ch[i]=ch[j];
				ch[j--]=temp;
				if(ch[0]>='a'&&ch[0]<='z')//for capital letter
				{
					ch[0]=ch[0]-32;
				}
			}
			start=end+1;
		}
	}
	printf("\t%s",ch);
}