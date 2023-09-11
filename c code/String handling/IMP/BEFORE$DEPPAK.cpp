#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90],skey[10];
	printf(" Enter a string\n");
	gets(ch);
	int count=0,j=0,start=0,end=0,k,p;
	int len=strlen(ch);
	int space=0,symbol;
	printf(" Enter a search\n");
	gets(skey);
	for(int i=0;i<len;i++)
	{
		
		if(ch[i]==' '){
			space=i;
		}
		else if(skey[count]==ch[i])
		  {
		  	symbol=i;
		  for(j=space;j<symbol;j++)
		  {
		  	printf("%c",ch[j]);
		 
		  }
	   }
		 
	}
		
}