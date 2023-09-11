#include<stdio.h>
#include<string.h>
int main()
/*{
	char ch1[90],ch2[90];
	printf(" Enter a string\n");
	gets(ch1);
	printf(" Enter a second srting\n ");
	gets(ch2);
  strcat(ch1,ch2);
	printf("%s\n",ch1);
}*/
{
	char ch1[90],ch2[90];
	printf(" Enter a string\n");
	gets(ch1);
	int len=strlen(ch1);
	printf(" Enter a second string\n");
	gets(ch2);
	int len2=strlen(ch2);
	int count=0;//vishal yadav =11
	int lll=len+len2;
	printf("%d",lll);
	while(ch2[count]!='\0')
	{
		ch1[len]=ch2[count];//5yadav
		len++;
		count++;
		
	}
	ch1[len]='\0';//ch1[9]='\0'
	printf("%s",ch1);
}
	
	