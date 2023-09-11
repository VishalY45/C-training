#include<stdio.h>
#include<String.h>
int main()
{
	char ch[90],ch1[90];
	printf(" Enter a string\n");
	gets(ch);
	int len=strlen(ch);
	int i=0;
	while(ch[i]!='\0')
	{
	  ch1[i]=ch[i];
	  i++;	
	}
	int end=len-1;
	int mid=len/2;
	/*for(i=0;i<mid;i++)
	{
		int temp=ch[i];
		ch[i]=ch[end];
		ch[end]=temp;
		end--;
    }*/
    for(i=0;i<len;i++)
    {
    	for(int j=i+1;j<len;j++)
    	{
    		int temp=ch[i];
    		ch[i]=ch[j];
    		ch[j]=temp;
    		
		}
	}
	printf("%s",ch);
	int result=strcmp(ch,ch1);
	
	if(result==0)
	{
		printf(" String is pelindrome");
	}
	else
	{
		printf(" String is not pelindrome");
	}
	
}