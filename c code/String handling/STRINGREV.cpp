#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	int e,len,m,s=0,count=0,s1;
	len=strlen(ch);
    e=len-1;
	//m=len/2;

	while(ch[s]!=32)
	{
		count++;
		s++;
	}
	m=count/2;
    for(int s=0;s<m;s++)
	  {
	  
	  	char temp=ch[s];
		ch[s]=ch[count];
		ch[count--]=temp;
	
       }
       printf("%s",ch);
    }
