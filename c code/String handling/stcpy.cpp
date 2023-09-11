#include<stdio.h>
#include<string.h>
int main()
/*{
	char ch[90],ch1[90];
	printf(" Enter a string\n");
	gets(ch);
	printf("Enter second string\n");
	gets(ch1);
	strcpy(ch,ch1);
	printf("%s",ch);
}*/
{
	int count=0;
	char ch[90],ch1[90];
	printf(" Enter a frist array\n");
	gets(ch);
	int l=strlen(ch);
	printf(" Enter a second array\n");
	gets(ch1);
	int len=strlen(ch1);
	while(ch[count]!='\0')
	{
		ch[count]=ch1[count];
		count++;
	
	}
	ch1[count]='\0';
		printf("Frist %s\n",ch);
			printf("Second %s",ch1);
	
}