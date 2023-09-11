#include<stdio.h>
#include<string.h>
int main()
{
	char name[90];
	int k=-1,count;
	printf("Enter a array string\n");
	gets(name);
	int len=strlen(name);
	//int f=0;
	//printf("%s",name);
    for(int i=0;i<len;i++)
    {
    	count=1;                   
    	for(int j=i+1;j<len;j++)    
    	{
    		if(name[i]==name[j])    
    		{
    			count++;
    			name[j]=k;        	
			}
		}
		 if(name[i]!=k)
		{
			printf("%c--->%d\n",name[i],count);
		}		
	}
	
}