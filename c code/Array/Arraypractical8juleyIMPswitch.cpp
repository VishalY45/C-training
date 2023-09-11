#include<stdio.h>
int main()
{
	printf(" Enter 1 for perfect\n");
	printf(" Enter 2 for amstrong\n");
	printf(" Enter 3 for asscending array\n");
	printf(" Enter 4 for find even and odd\n");
	int ch;
	printf(" Enter a choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
			
			int no,f=0,i=1;
			printf(" Enter a no");
			scanf("%d",&no);
			while(i<=no)
			{int j=1,sum=0;
				while(j<=i/2)
				{
					if(i%j==0)
					{
						sum=sum+j;
					
					}
						j++;
					
				}
				
				if(sum==i)
				printf("%d",i);
				i++;
				
			}
			break;
		}
			case 2:
				{
				
				int no,rem,count,i=1;
				printf(" Enter a no");
				scanf("%d",&no);
				while(i<=no)
				{
					int count=0,sum=0,k=i;
					while(i!=0)
					{
						count++;
						i=i/10;
					}
					i=k;
					while(i>0)
					{
						int rem,p=1,j=1;
						rem=i%10;
						while(j<=count)
						{
							p=p*rem;
							j++;
						}
						sum=sum+p;
						i=i/10;
					}
					i=k;
					if(sum==i)
					printf("%d",i);
					i++;
				}
				break;
			}
			case 3:
				{
				
				int a[5],i,nsize=0,j;
				printf(" Enter array element\n");
				for(i=0;i<5;i++)
				{
					scanf("%d",&a[i]);
				}
				for(i=0;i<5;i++)
				{
					for(j=i+1;j<5;j++)
					{
						if(a[i]>a[j])
						{
							nsize=a[i];
							a[i]=a[j];
							a[j]=nsize;
						}
					}
				}
				printf(" ascending order\n");
				for(i=0;i<5;i++)
				printf("\n%d",a[i]);
			}
			break;
			case 4:
				{
				
				int a[100],i,size;
				printf(" Enter a size of array\n");
				scanf("%d",&size);
				printf(" Enter array of elemnt");
				for(i=0;i<size;i++)
				{
					scanf("%d",&a[i]);
				}
					printf("\n even no");
				for(i=0;i<size;i++)
				{
					if(i%2==0)
					{
						printf("\t%d",a[i]);
					}
				}
				printf("\n odd no");
				for(i=0;i<5;i++)
				{
					if(i%2==1)
					{
						printf("\t%d",a[i]);
					}
				}
			}
			break;
			default:
				printf(" wrong choice");
		
	}
}
