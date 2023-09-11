#include<stdio.h>
#include<string.h>
int main()
{
	int k=0;
	char str1[90],str2[90];
	printf("Enter a string:=");
	gets(str1);
	printf("\nEnter s search string:=");
	gets(str2);
	int i,j,found=0;
	for(i=0;str1[1]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i+j]!=str2[j])
			{
				break;
			}
		}
		if(str2[j]=='\0')
		{
			found=1;
			break;
		}
	}
	if(found)
	{
		printf("\n Start index:-%d----End index--->%d",i,(i+strlen(str2)-1));
		printf("%s The string is found %s",str2,str1);
	}
	else
	{
		printf("%s The string is not found %s",str2,str1);
	}
}