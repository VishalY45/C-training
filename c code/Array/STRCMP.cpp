#include<stdio.h>
#include<string.h>
int main()
/*{
	char ch1[90],ch2[90];
	printf(" Enter a frist string\n");
	gets(ch1);
	printf(" Enter a second string\n");
	gets(ch2);
	int result=strcmp(ch1,ch2);
	if(!result)
	{
		printf(" String are Equal");
	}
	else
	{
		printf(" String is not Equal");
	}
}*/

{
	int diff,count=0,f=1;
	char ch1[90],ch2[90];
	printf(" Enter a frist string\n");
	gets(ch1);
	printf(" Enter a second string\n");
	gets(ch2);
	int len=strlen(ch1);
	int len2=strlen(ch2);
	if(len==len2)
	{
	   while(ch1[count]!='\0')
	   {
	   	diff=ch1[count]-ch2[count];
	   	if(diff!=0)
	   	{
	   		f=0;
	   		break;
		   }
		   count++;
	   }
		
	
	if(f)
	{
		printf(" String are Equal");
	}
	else
	{
		printf("String are not Equal");
	}
}

	else
	{
		printf(" Stirng are not equal");
	}
}