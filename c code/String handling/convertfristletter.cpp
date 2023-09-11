#include<Stdio.h>
#include<string.h>
int main()
{
	int i,sum=0,count=0,count1=0;
	char name[90];
	printf("Enter a string\n:-");
	gets(name);
	int l=strlen(name);
	printf("%d",l);
	printf("\n Before checking:=%s\t",name);
	for(i=0;i<l;i++)
	{
	
	if(name[0]>=97&&name[0]<=122)
	{
		name[i]=name[i]-32;
	}
	else if(name[i]==32)
	{
		++i;
		if(name[i]>='a'&&name[i]<='z')
		{
			name[i]=name[i]-32;
		}
		
    }
  
}
	
	printf("\n%s\t",name);
}