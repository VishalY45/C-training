#include<Stdio.h>
#include<string.h>
int main()
{
	int i,sum=0;
	char name[90];
	printf(" Enter a string");
	gets(name);
	int l=strlen(name);
	for(i=0;i<l;i++)
	{
		if(name[i]>='0'&&name[i]<='9')
		{
			sum=sum+(name[i]-'0');
		
		}
	
	}
	printf("sum is:=%d",sum);
}