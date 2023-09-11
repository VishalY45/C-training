#include<stdio.h>
struct product
{
	int id;
	char name[90];
	int price;
};
struct product p[5];
int main()
{
	printf("Enter a product id name and price\n");
	for(int i=0;i<5;i++)
	{
	   printf("Enter id name price\n");
	   scanf("%d%s%d",&p[i].id,&p[i].name,&p[i].price);	
	}
	printf("\nDisplay all data\n");
	printf("\n Id Name Price of product\n");	
	for(int i=0;i<5;i++)
	{
		//
		printf("%d\t%s\t%d\n",p[i].id,p[i].name,p[i].price);
	}
	printf("\n The data in Asending order\n");
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(p[i].price<p[j].price)
			{
				struct product temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\t%s\t%d\n",p[i].id,p[i].name,p[i].price);
	}
}