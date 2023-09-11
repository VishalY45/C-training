#include<stdio.h>
#include<math.h>
int main()
{
	void count(int);
	void amstrong(int);
	void reverse(int);
	void swap(int);
	void sum(int);
	void mid(int);
	printf("\n1:for a count\n");
	printf("\n2:for a amstrong\n");
	printf("\n3:for a reverse\n");
    printf("\n4:for a swap\n");
	printf("\n5:for a sum\n");
	int no,choice;
	printf(" Enter a no\n");
	scanf("%d",&no);
	printf("\n ENter a choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			count(no);
			break;
			case 2:
				amstrong(no);
				break;
				case 3:
				reverse(no);
					break;
					case 4:
						swap(no);
						break;
						case 5:
							sum(no);
							break;
							 	default:
            	                    	printf(" Wrong choice\n");
            	}
			
	
}
void count(int no)
{
	int countt=0;
	while(no!=0)
	{
		countt++;
		no=no/10;
		}
		printf("\n Count is%d",countt);
}
void amstrong(int no)
{
		int rem,count=0,sum=0;
			int temp=no;
			while(no!=0)
			{
				count++;
				no=no/10;
			}no=temp;
			while(no!=0)
			{
				int i=1,p=1;
				rem=no%10;
				while(i<=count)
				{
					p=p*rem;
					i++;
				}
				sum=sum+p;
				no=no/10;
			}no=temp;
			if(no==sum)
			{
				printf(" no is amstrong\n");
			}
			else
			{
				printf(" no is not amstrong\n");
			}
}
void reverse(int no)
{
	int rem,rev;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	printf("Rev is %d",rev);
}

void swap(int no){
	int temp=no,rem,count=0;
	while(no!=0){
		count++;
		no=no/10;
	}
	no=temp;
    int	ld=no%10;
	int	p=pow(10,count-1);
	int	fd=no/p;
		no=no/10;
	int	p1=pow(10,count-2);
		no=no%p1;
		no=ld*p+no*p1+fd;
	
	printf("%d",no);
}
void sum (int no){
	int sum=0;
	while(no!=0)
	{
		int rem=no%10;
		no=no/10;
		sum=sum+rem;
	}
	printf("Sum is %d",sum);
}

