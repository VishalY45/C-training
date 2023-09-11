#include<stdio.h>
#include<math.h>
#include<stdlib.h>  
int main()

// 1) strong no.
// 2) 1 To n strong no.
// 3) amstrong no checking



//1) strong no checking
/*
{
	long int no,rem,temp,i=1,fact=1,sum=0;
	printf(" Enter a no:-");
	scanf("%ld",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		fact=1,i=1;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("\n No is strong:- %ld",temp);
		
	}
	else
	{
		printf(" No is not strong:- %ld",temp);
	}
}
*/
/*
//------------------------------------------------------------------------------------------------------------------------
//2) strong no 1to n
{
	long int no,i,n,sum,fact,rem,j;
	printf("Entr a no\n");
	scanf("%ld",&no);
	for(i=1;i<=no;i++)
	{
		sum=0;
		n=i;
		while(n>0)
		{
			rem=n%10;
			fact=1;
			j=1;
			while(j<=rem)
			{
				fact=fact*j;
				j++;
				
			}
			sum=sum+fact;
			n=n/10;
		}
		if(sum==i)
		printf("\nStrong no:-%ld",i);
		
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
//3)  Amstrong no checking
/*
{
	int no,temp,count=0,rem,sum=0,i,p;
	printf(" Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	while(no!=0)
	{
		p=1,i=1;
		rem=no%10;
	//	p=pow(rem,count);
		while(i<=count)
		{
		p=p*rem;
		i++;	
		}
		
		sum=sum+p;
		printf(" sum is%d",sum);
		no=no/10;
	}
	if(sum==temp)
	printf(" NO is Amstrong");
	else
	printf(" No is Not Amstrong");

}*/




//-------------------------------------------------------------------------------------------------------------------------

// Amstrong no 1 to n
/*
{
	int no,n;
	printf(" Enter a no");
	scanf("%d",&no);
		printf("\n Amstrong No 1 To N");
	for(n=1;n<=no;n++)
	{
		int count=0,sum=0,t=n;
		while(n!=0)
		{
			count++;
			n=n/10;
		}
		n=t;
		while(n>0)
		{
			int p=1,j=1,rem;
			rem=n%10;
			while(j<=count)
			{
				p=p*rem;
				j++;
			}
			sum=sum+p;
			n=n/10;
		}
		n=t;
		if(sum==n)
		{
		
			printf("\n\tAmstrong no :- %d",n);
		}
	}
}
*/
//---------------------------------------------------------------------------------------------------------------------

//4) perfect No cjecking
/*
{
	int no,rem,i=1,flag,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<no)
	{

	  if(no%i==0)
	  {
	  	sum=sum+i;
	  	
	  }
	  i++;
	 
	  
	}
	if(sum==no)
	{
		printf(" \n No is Perfect");
	}
	else
	{
	printf(" NO is not perfect");
}
}
*/
//-------------------------------------------------------------------------------------------------------------

//5) 1 To N perfect no
/*
{
	int no,n,sum,i,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		
		sum=0;
		for(int j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		
				}
		if(sum==i)
		{
			printf(" \n Perfect no :- %d",i);
		}
		
	}
	}
	*/
//------------------------------------------------------------------------------------------------------------------
//6) prime no checkling
/*
{
	int no,i=2,flag;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<=no/2)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		
		i++;
	}
	if(flag==1)
	printf(" No is not prime");
	else
	printf("no is  prime");
	}
	*/
//-----------------------------------------------------------------------------------------------------------
//7) all prime no
/*
{
	
int no,prime,j,n;
printf(" Enter a no");
scanf("%d",&no);
for( n=2;n<=no;n++)
{
int prime=0;
for(j=2;j<=n/2;j++)
{
	if(n%j==0)
	{
		prime=1;
		break;
	}
}
if(prime==0&&n!=1)
printf(" \n Prime no:-%d",n);
 
}
}
*/
//----------------------------------------------------------------------------------------------------------------------
//8) pelindrome no
/*
{
	int no,rem,rev=0,temp;
	printf(" Enter a no");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		
	}
	no=temp;
	if(rev==no)
	{
		printf(" \n No is pelindrome");
		
	}
	else
	{
		printf(" No is not pelindrome");
	}
}
*/

//----------------------------------------------------------------------------------------------------------------
//9) 1 to n pelindrome no
/*
{
	int no,n;
	printf(" Enter a no");
	scanf("%d",&no);
	for(n=1;n<=no;n++)
	{
	int rev=0,rem,t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	n=t;
	if(rev==n)
              printf("\n%d",n);
		}
	}
	*/
//----------------------------------------------------------------------------------------------------------------------
// 10) duck no
/*
{
	int no,rem,flag=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		if(rem==0)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf(" No is duck");
	}
	else
	{
		printf(" No is not duck");
	}
}
*/
//------------------------------------------------------------------------------------------------------------
//11) factorial
/*
{
	int no,f=1,i=1;
	printf(" enter a no");
	scanf("%d",&no);
	while(i<=no)
	{
		f=f*i;
		i++;
	}
	printf(" fact is %d",f);
}*/
//-------------------------------------------------------------------------------------------------------------------
//12)fibonacci
/*
{
	int f1=0,f2=1,i=3,no,fib;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<=no)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		i++;
	}
	printf(" fib is %d",fib);
}
*/
//-------------------------------------------------------------------------------------------------------------------
//13) table print
/*
{
	int no,tab,i=1;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		tab=no*i;
		printf("\n %d *%d =%d",no,i,tab);
	}
}*/
//-----------------------------------------------------------------------------------------------------------------------
//14) 1 to n table
/* 
{
	int no,tab,i,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=1;j<=10;j++)
		{
			tab=i*j;
			printf("%d*%d=%d\n",i,j,tab);
		}
		printf("\n");
	}
}
*/
//-------------------------------------------------------------------------------------------------------------------------

//15)
/*
{
	if(printf("hello")){
	
	}}
	*/
//------------------------------------------------------------------------------------------------------------------------
//16) find factor
/*
{
	int no,i=1;
	printf(" Enter a no");
	scanf("%d",&no);
	while(i<=no/2)
	{
		if(no%i==0)
		{
			printf("\n%d",i);
		}
		i++;
	}
}
*/
//-------------------------------------------------------------------------------------------------------------------------
//17)sum of no
/*
{
	int no,rem,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		sum=sum+rem;
		
	}
	printf(" Sum is %d",sum);
}
*/
//-----------------------------------------------------------------------------------------------------------------------
//18) fib tringle
/*
{
	int f1=0,f2=1,fib,i,j,no;
	 
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		f1=0;
		f2=1;
	//	printf("hi");
		printf("%d\t",f2);
		for(j=1;j<i;j++)
		{
			fib=f1+f2;
			printf("%d\t",fib);
			f1=f2;
			f2=fib;
		}
		printf("\n");
	}
		
	}
	*/
//--------------------------------------------------------------------------------------------------------------------
// Enter no and printf in word
/*
{
	int no,rem,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
	rem=no%10;
	sum=sum*10+rem;
	no=no/10;
}
no=sum;
while(no>0)
{
   rem=no%10;
	switch(rem)
	{
		case 0:
			printf(" zero ");
			break;
		case 1:
			printf(" one ");
			break;
			case 2:
			printf(" two ");
			break;
			case 3:
			printf(" three ");
			break;
			case 4:
			printf(" four ");
			break;
			case 5:
			printf(" five ");
			break;
			case 6:
			printf(" six ");
			break;
			case 7:
			printf(" seven ");
			break;
			case 8:
			printf(" eight ");
			break;
			case 9:
			printf(" nine ");
			break;
			
	}
	no=no/10;
}
		
}
*/
//--------------------------------------------------------------------------------------------------------------------------
// 20)pelindrome tringle
/*
{
	int i,j,f=1,count;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=17;j++)
		{
			if(j>=9-i&&j<=8+i&&f)
			{
			printf("%d",count);	
			f=0;
			}
			else
			{
				printf("*");
				f=1;
			}
		}
		printf("\n");
	}
}
*/
//----------------------------------------------------------------------------------------------------------------------------
// 21)
/*
C program to print following Pyramid: 
1 1 
12 21 
123 321 
1234 4321 
1234554321 */
/*
{
	int i,j,count;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=10;j++)
		{
			if((j<=i)||(j>=6&&j<=5+i))
			{
				printf("%d",count);
				if(j>i)
				{
					count--;
				}else if(j<i)
				{
					count++;
				}
				
			}
			else
			{
			
			printf(" ");
		}
		}
		printf("\n");
	}
	}	*/
	
//-------------------------------------------------------------------------------------------------------------------------
//swaping no
/*
{
	int no,count=0,ld,fd,p=1,p1=1;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	ld=no%10;
     p=pow(10,--count);
	fd=no/p;
	no=no/10;
	p1=pow(10,--count);
	no=no%p1;
	no=ld*p+no*10+fd;
	printf(" after swaping no=%d",no);
}
*/
//----------------------------------------------------------------------------------------------------------------------------
// AMicable no
{
	int n1,n2,sum1=0,sum2=0,i=1,j=1;
	printf(" Enter Two no:=\n");
	scanf("%d%d",&n1,&n2);
	while(i<n1)
	{
		if(n1%i==0)
		{
			sum1=sum1+i;
			
		}i++;
	}
	while(j<n2)
	{
		if(n2%j==0)
		{
			sum2=sum2+j;
		}j++;
	}
	if(sum1==n2&&sum2==n1)
	{
		printf(" no is amicable");
	}
	else
	{
		printf(" no is not amicable");
	}
}

	