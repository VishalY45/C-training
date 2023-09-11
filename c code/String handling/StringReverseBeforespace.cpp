#include<string.h>
#include<stdio.h>
int main()
{
	char name[90];
	printf("Enter a string\n");
	gets(name);
	int s=0;
	for(int i=0;i<=strlen(name);i++)//vishal6vi yadav
	{
		if(name[i]==' '||name[i]=='\0')
		{
			int k=i-1;
			for(int j=s;j<=k;j++)
			{
				char temp=name[j];
				name[j]=name[k];
				name[k--]=temp;
			}
				s=i+1;
		}
	
		
	}
	printf("%s",name);
}