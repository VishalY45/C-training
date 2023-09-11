	#include<string.h>
#include<Stdio.h>
int main()
{
	int choice,size;
	char ch[90];
	int no[5],i,j;
	
	do
	{
		printf("1 for convert word to no\n");
		printf("2 for conver number to word\n");
		printf("Enter a choice\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
		
			case 1:
				printf("Enter a String\n");
			    //gets(ch);
			    scanf("%s",&ch);
				for(i=0;i<strlen(ch);i++)
				{
					if(ch[i]==32)
					{
						printf(" ");
					}
					else
					{
						ch[i]=(int)(ch[i]);// conversion word to no
						printf("%d\n",ch[i]);
					}
				}
				break;
				case 2:
					printf("Enter a no size");
					scanf("%d",&size);
					printf("ENter s no");
					for(i=0;i<size;i++)
					{
						scanf("%d",&no[i]);
					}
					for(i=0;i<size;i++)
					{
						no[i]=(char)(no[i]);//conversion no to word
						printf("%c\t",no[i]);
					}
					printf("\n");
					break;
					default:
						printf("Ente Wrong choice\n");
		}
	}while(choice<=2);
}