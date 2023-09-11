#include<stdio.h>
#include<math.h>
int main()
// 1) Write a C program to print all natural numbers from 1 to n. - using while loop
/*
{
	int no,i;
	printf(" ENter a no\n");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("%d\n",i);
	}
}*/
//---------------------------------------------------------------------------------------
//2)Write a C program to print all natural numbers in reverse (from n to 1). - using while loop 

/*{
	int no,i;
	printf("Enter a no");
	scanf("%d",&no);
	for(i=no;i>=1;i--)
	{
		printf("%d\n",i);
	}
}*/
//-----------------------------------------------------------------------------------------------
//3)Write a C program to print all alphabets from a to z
/*
{
	char i='a';
	for(i=97;i<=122;i++)
	{
		printf("\n%c",i);
	}
}*/
//-----------------------------------------------------------------------------------------------
//4)Write a C program to print all even numbers between 1 to 100.
/*{
	int i,no;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		if(i%2==0)
		{
			
			printf("%d\n",i);
		}
	}
}
*/
//-----------------------------------------------------------------------------------------------
//5)Write a C program to print all odd number between 1 to 100. 
/*
{
	int i,no;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2==1)
		{
			printf("\n%d",i);
		}
	}
}*/
//-----------------------------------------------------------------------------------------------
//6) Write a C program to find sum of all natural numbers between 1 to n
/*{
	int i,no,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	 sum=sum+i;
	 printf("%d\n",i);
	 	
	}
	printf("sum is %d",sum);
}*/
//-----------------------------------------------------------------------------------------------
//7. Write a C program to find sum of all even numbers between 1 to n.
/*{
	int i,no,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
		
	 sum=sum+i;
	 printf("%d\n",i);
}
	 	
	}
	printf("sum is %d",sum);
} */
//-----------------------------------------------------------------------------------------------
//8. Write a C program to find sum of all odd numbers between 1 to n. 
/*{
	int i,no,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2==1)
		{
		
	 sum=sum+i;
	 printf("%d\n",i);
}
	 	
	}
	printf("sum is %d",sum);
}*/
//-----------------------------------------------------------------------------------------------
//9)Write a C program to print multiplication table of any number. 
/*
{
	int i,no,tab;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		tab=no*i;
		printf("%d*%d=%d\n",no,i,tab);
	}
}*/
//-----------------------------------------------------------------------------------------------
//10)Write a C program to count number of digits in a number.
/*{
	int no,count=0;
	printf("Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		count++;
		no=no/10;
	}
	printf("\n Count is=%d",count);
}*/
//-----------------------------------------------------------------------------------------------
//.11) Write a C program to find first and last digit of a number. 
/*{
	int i,no,fd,ld,rem;
	printf(" Enter a no");
	fd=no;
	scanf("%d",&no);
	ld=no%10;
	printf("last digit is%d\n",ld);
	while(no>=10)
	{
		//rem=no%10;
		no=no/10;
		
	}
	fd=no;
	printf("frist digit %d",fd);
}*/
//-----------------------------------------------------------------------------------------------
// 12)Write a C program to find sum of first and last digit of a number. 
/*{
	int no,fd,ld,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	ld=no%10;
	while(no>=10)
	{
		no=no/10;
	}
	fd=no;
	printf("last digit %d",ld);
	printf(" \n frist digit is %d",fd);
	sum=fd+ld;
	printf("\n sum is %d",sum);
}*/
//-----------------------------------------------------------------------------------------------
// 13)Write a C program to swap first and last digits of a number. 
/*{
	int no,p=1,p1=1,rem,ld,fd,count=0;
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
	no=no/10;//123
	p1=pow(10,--count);
	no=no%p1;//123/100=23
	no=ld*p+no*10+fd;
	printf(" after swaping no %d",no);
}*/
//-----------------------------------------------------------------------------------------------
// 14) Write a C program to calculate sum of digits of a number
/*{
	int no,sum=0,i;
	printf("enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		int rem;
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf(" Sum of digit is %d",sum);
}*/
//-----------------------------------------------------------------------------------------------
//15. Write a C program to calculate product of digits of a number. 
/*{
	int no,p=1;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		int rem;
		rem=no%10;
		p=p*rem;
		no=no/10;
	}
	printf(" product is %d",p);
}*/
//-----------------------------------------------------------------------------------------------
//16. Write a C program to enter a number and print its reverse. 
/*{
	int no,rev=0,rem,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
		
	}
	printf(" rev is %d\n",rev);
}*/
//-----------------------------------------------------------------------------------------------
//17. Write a C program to check whether a number is palindrome or not. 
/*{
	int no,rem,temp,rev=0;
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
	if(no==rev)
	{
		printf(" no is pelindrome");
	}
	else
	{
		printf(" no is not pelindrome");
	}
}*/
//-----------------------------------------------------------------------------------------------
//18. Write a C program to find frequency of each digit in a given integer. 
/*{
	int no,n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
	n0=n1=n2=n3=n4=n5=n6=n7=n8=n9=0;
	printf(" Enter a no");
	scanf("%d",&no);
	while(no!=0)
	{
		int rem;
		rem=no%10;
		switch(rem)
		{
			case 0:
				n0++;
				break;
				case 1:
				n1++;
				break;
				case 2:
				n2++;
				break;
				case 3:
				n3++;
				break;
				case 4:
				n4++;
				break;
				case 5:
				n5++;
				break;
				case 6:
				n6++;
				break;
				case 7:
				n7++;
				break;
				case 8:
				n8++;
				break;
				case 9:
				n9++;
				break;
		}
		no=no/10;
		
	}
	if(n0>0)
	printf("\n0---%d times",n0);
		if(n1>0)
	printf("\n1---%d times",n1);
		if(n2>0)
	printf("\n2---%d times",n2);
		if(n3>0)
	printf("\n3---%d times",n3);
		if(n4>0)
	printf("\n4---%d times",n4);
		if(n5>0)
	printf("\n5---%d times",n5);
		if(n6>0)
	printf("\n6---%d times",n6);
		if(n7>0)
	printf("\n7---%d times",n7);
		if(n8>0)
	printf("\n8---%d times",n8);
		if(n9>0)
	printf("\n9---%d times",n9);
}*/
//-----------------------------------------------------------------------------------------------
// 19)Write a C program to enter a number and print it in words. 
/*
{
	int no,num=0,rem;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
		num=(num*10)+(no%10);
		no=no/10;
	}
	
	while(num!=0)
	{
		//int rem;
	//	rem=num%10;
		switch(num%10)
		{
			case 0:
				printf("\n zero");
				break;
				case 1:
					printf("\n one " );
					break;
					case 2:
					printf(" \n two");
					break;
					case 3:
					printf(" \nThree");
					break;
					case 4:
						printf(" \n four");
						break;
						case 5:
							printf("\n five");
							break;
							case 6:
								printf(" \n six");
								break;
								case 7:
									printf(" \n seven");
									break;
									case 8:
										printf("\n eight");
										break;
										case 9:
											printf("\n nine");
											break;
											
					 
		}
		num=num/10;
		
	}
}*/
//-----------------------------------------------------------------------------------------------
//20) Write a C program to print all ASCII character with their values. 
{
	int no,i;
	for(i=1;i<=255;i++)
	{
		printf("%c\t=%d\t",i,i);
	}
}


//-----------------------------------------------------------------------------------------------
//21. Write a C program to find power of a number using for loop. 
/*{
	int index,base,i,p=1;
	printf("Enter a base and index");
	scanf("%d%d",&base,&index);
	for(i=1;i<=index;i++)
	{
		p=p*base;
	}
printf(" power is%d\n",p);
}*/
//-----------------------------------------------------------------------------------------------
// 22.Write a C program to find all factors of a number
/*{
	int no,i;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("factor is\n");
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			printf("%d\n",i);
		}
	}
}*/
//-----------------------------------------------------------------------------------------------
//23. Write a C program to calculate factorial of a number. 
/*{
	int i,no,f=1;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	f=f*i;	
	}
	printf(" fact is %d",f);
}*/
//-----------------------------------------------------------------------------------------------
//24Write a C program to check whether a number is Prime number or no
/*{
	int no,i,f=0;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
	f=0;
		if(no%i==0)
		{
			f=1;
			break;
		}
		
	}
	if(f==0&&no!=1)
	{
		printf(" no is  prime");
	}
	else
	{
		printf(" no is not prime");
	}
}
*/
//-----------------------------------------------------------------------------------------------
// 25Write a C program to print all Prime numbers between 1 to n. 
/*{
	int no,i,f,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
			}
		}
		if(f==0&&i!=1)
		{
			printf("%d\n",i);
		}
	}
}
*/
//-----------------------------------------------------------------------------------------------
// 26 Write a C program to find sum of all prime numbers between 1 to n. 
/*{
	int no,i,sum=0,f=0,j;
	printf(" ENter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
	f=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		
		}
		if(f==0&&i!=1)
		{
			
			sum=sum+i;
		}
	}
		printf("%d\n",sum);
	
}*/
//-----------------------------------------------------------------------------------------------
// 27.Write a C program to find all prime factors of a number. 
/*{
	int no,i,f=0,j;
	printf("enter a no");
	scanf("%d",&no);
	for(i=2;i<=no;i++)
	{
		if(no%i==0)
		{
			f=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
				
				f=0;
				break;
			}
			}
		
		if(f==1)
		{
			printf("%d",i);
		}
	}
	}
}*/
//-----------------------------------------------------------------------------------------------
// 28 Write a C program to check whether a number is Armstrong number or not
/*{
	int no,temp,i,count=0,sum=0,p=1;
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
		int rem;
		rem=no%10;
		p=pow(rem,count);
		no=no/10;
		sum=sum+p;
	}
	no=temp;
	if(sum==no)
	{
		printf(" no is amstrong");
	}
	else
	{
		printf(" no is not amstrong");
	}
	
}*/
//-----------------------------------------------------------------------------------------------
// 29 Write a C program to print all Armstrong numbers between 1 to n
/*{
	int no,i,j;
	printf(" enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int k=i,count=0,sum=0;
		while(i!=0)
		{
			count++;
			i=i/10;
		}i=k;
		while(i>0)
		{
			int rem,j=1,p=1;
			rem=i%10;
		/*	while(j<=count)
			{
				p=p*rem;
				j++;
			}
			p=pow(rem,count);
			i=i/10;
			sum=sum+p;
		}i=k;
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}*/
//-----------------------------------------------------------------------------------------------
// 30 Write a C program to check whether a number is Perfect number or not. 
/*{
	int no,i,f=0,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
	//	f=0;
		if(no%i==0)
		{
		sum=sum+i;
		//f=1;
			
		}
	}
		if(sum==no)
		{
			printf(" no is perfect");
		}
		else
		{
			printf(" no is not perfect");
		}
	
}
*/
//-----------------------------------------------------------------------------------------------
// 31 Write a C program to print all Perfect numbers between 1 to n. 
/*{
	int no,i,j;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf(" %d",i);
		}
	}
}
*/
//-----------------------------------------------------------------------------------------------
//Write a C program to check whether a number is Strong number or not. 
/*{
	int no,sum=0;
	printf(" Enter a no");
	scanf("%d",&no);
	int temp=no;
	while(no!=0)
	{
		int rem,f=1,i=1;
		rem=no%10;
		while(i<=rem)
		{
		f=f*i;
		i++;	
		}
		sum=sum+f;
		no=no/10;
	}
	no=temp;
	if(sum==no)
	{
		printf(" no is strong");
	}
	else
	{
		printf(" no is not strong");
	}
}*/
//-----------------------------------------------------------------------------------------------
//Write a C program to print all Strong numbers between 1 to n. 
/*{
	int no,i;
	printf(" Enter a no");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		int k=i,sum=0;
		while(i!=0)
		{
			int rem,j=1,f=1;
			rem=i%10;
			while(j<=rem)
			{
				f=f*j;
				j++;
				
			}
			sum=sum+f;
			i=i/10;
		}
		i=k;
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
*/
// Write a C program to print Fibonacci series up to n terms
/*{
	int no,f1=0,f2=1,fib,i;
	printf(" Enter a no");
	scanf("%d",&no);
	printf("%d\t%d\t",f1,f2);
	for(i=2;i<no;i++)
	{
		fib=f1+f2;
		printf("%d\t",fib);
		f1=f2;
		f2=fib;
		
	}
//	printf("%d\t",fib);
}*/



		
	











