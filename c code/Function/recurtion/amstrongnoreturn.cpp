/* WAP to input number and check numerb is Armstrong or not using a 
recursion if number is Armstrong then return 1 otherwise return -1*/
#include<stdio.h>
int p=1,i=1,sum=0,count=0;
int amstrong(int no)
{ int	temp=no;
   	if(no!=0)
   	{
   		count++;
   			no=no/10;
   		return amstrong(no);
   	
	   }
	   printf("count%d",count);
	   no=temp;
	   if(no!=0)
	   {
	   
	   	int rem=no%10;
	   	if(i<=count)
	   	{
	   		p=p*rem;
	   		i++;
	   		sum=sum+p;
	   		return amstrong(no);
		   }
		   
		   
		 
		   no=no/10;
	} no=temp;
	printf("%d",sum);
		   if(sum==no)
		   {
		   	return 1;
		   }
		   else
		   {
		   	return -1;
		   }
		   
	   
	   
}
int main()
{
	int temp,no;

	printf(" ENter a no");
	scanf("%d",&no);
	
	int result=amstrong(no);
	if(result==1)
	{
		printf(" no is amstrong\n");
	}
	else
	{
		printf(" no is not amstromg");
	}
}
