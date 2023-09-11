#include<Stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,count=0,count1=0;
	char name[90];
	printf(" Enter a string");
	gets(name);
	int l=strlen(name);
	printf("\n Before checking:=%s",name);
	for(i=0;i<l;i++)
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
		{
			count++;
		}
		else
		{
		  count1++;	
		}
	}
	printf("\nVowel is:%d",count);
	printf("\nConsonent is %d",count1);
}