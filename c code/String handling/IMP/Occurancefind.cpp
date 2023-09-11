#include<stdio.h>
#include<string.h>
int main()
{
	char name[90],k=-1,count;
	printf("Enter a array string\n");
	gets(name);
	int l=strlen(name);
	int f=0;
	//printf("%s",name);
    for(int i=0;i<l;i++)
    {
    	count=1;                   
    	for(int j=i+1;j<l;j++)    
    	{
    		if(name[i]==name[j])    
    		{
    			f=1;
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