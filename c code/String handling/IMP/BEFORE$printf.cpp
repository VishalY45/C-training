#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90],skey[90];
	printf(" Enter a string");
	gets(ch);
	int count=0,i,j,temp=0;
	printf(" Enter a seky");
	gets(skey);
	/*
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]==0||ch[i]==' '||ch[i]==skey[count])
		{
			
			if(ch[i]==' '||ch[i]==0)
			{
				temp=i;
			}
			else if(ch[i]==skey[count])
			{
			  for(j=temp;j<i;j++)
			  {
			  	printf("%c",ch[temp]);
			  	temp++;
				  }	
			}
		}
    }
}*/
for(i=0;i<strlen(ch);i++)
	{
	
			if(ch[i]==' ')
			{
				temp=i;
			}
			else if(ch[i]==skey[count])
			{
			  for(j=temp;j<i;j++)
			  {
			  	printf("%c",ch[temp]);
			  	temp++;
				  }	
			}
		}
    }