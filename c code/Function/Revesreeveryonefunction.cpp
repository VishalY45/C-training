
#include<stdio.h>
#include<string.h>
int s1=0,s=0;
int main()
{ 
    char chr(char[]);
	char ch[90];
	printf(" Enter a string\n");
	gets(ch);
	chr(ch);
	
}

char chr(char ch[])
{
	int e,len,m,f,count=0;
	len=strlen(ch);
	
    //e=len-1;
	
	while(ch[s]!=32)
	{
		count++;
		s++;
	}

	e=count-1;
	m=count/2;
    for(int s=0;s<m;s++)
	  {
	    
	  	char temp=ch[s];
		ch[s]=ch[count];
		ch[count--]=temp;
	
	}
    printf("%s",ch);
    
}

       
		
	

	



