#include<stdio.h>
#include<string.h>
int main()
{
	char ch[90];
	printf(" Enter a string values\n");
	gets(ch);
	printf("\nBefore conversion:=%s",ch);
	int l=strlen(ch);
	int i,j=0;
	for(i=0;i<l;i++)
     {
     	for(j=i+i;j<l;j++)
     	{
     		if(ch[i]>ch[j])
     		{
     			int temp=ch[i];
     			ch[i]=ch[j];
     			ch[j]=temp;
			 }
		 }
	 }
	 printf("\nAfter conversion :=%s\n",ch);
}