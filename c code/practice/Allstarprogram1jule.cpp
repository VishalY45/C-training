#include<stdio.h>
int main()
// solid rectangle 1)
/*
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=1)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
*/

//2) hollow rectangle
/*
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||i==3||j==1||j==5)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

//3) half pyaramid
/*
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
{

				printf("*");
		
		}
		printf("\n");
	}
}*/

// 4) inverted half pyaramif
/*
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
{
             if(j<=7-i)
				printf("*");
		else
		printf(" ");
		}
		printf("\n");
	}
}*/

//5) inverted hollo pyaramid
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||j==6-i)
			{
			
			printf("*");
		}
		else
		{
			printf(" ");
		}
		}
			printf("\n");
	}
}
*/

// 6) full pyaramid
/*
{
	int i,j,f=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=7-i&&j<=5+i&&f==1)
			{
			
			printf("*");
			f=0;
		
		}
		else
		{
			printf(" ");
			f=1;
		}
		}
			printf("\n");
	}
}
*/

// 6) inverted full pyaramid
/*
{
	int i,j,f=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j>=i&&j<=12-i&&f==1)
			{
			
			printf("*");
			f=0;
		
		}
		else
		{
			printf(" ");
			f=1;
		}
		}
			printf("\n");
	}
}
*/

// 7) hollo full pyaramid
/*
{
	int i,j,f=1;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(j==7-i||j==5+i||(i==6&&f==1))
			{
			
			printf("*");
			f=0;
			
		
		}
		else
		{
			printf(" ");
			f=1;
			
		}
		}
			printf("\n");
	}
}
*/

// 8) half pyaramid
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		  printf("%d",j);	
		}
		printf("\n");
	}
}
*/

// 9) inverted half pyramid
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=6-i)
		  printf("%d",j);
		  else
		  printf(" ");	
		}
		printf("\n");
	}
}
*/
//10) hollo half pyaramid
/*
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1||j==1||j==i||i==5)
		  printf("%d",j);
		  else
		  printf(" ");	
		}
		printf("\n");
	}
}
*/

//11) full pyaramid
/*
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",count);
				if(j<5)
					{
						count++;
					}else{
						count--;
					}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
*/

// 12) hollow full pyaramid
/*
{
	int i,j,f=1,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if((i<=4&&j==6-i||j==4+i)||(i==5&&f==1))
			{
				printf("%d",count);
				count=i;
				if(i==5)
				count++;
				
				
				f=0;
			}
			else
			{
				printf(" ");
				f=1;
			}
		}
		printf("\n");
	}
}
*/

// 13) holloow inverted half pyaramid
/*
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{ count=i;
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||j==6-i)
			{
				printf("%d",count);
		
			}
			else
			{
				printf(" ");
			}
			count++;
			}
			printf("\n");
		}
	}
	*/
// 14) Different type of pelindrome
/*
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%d",count);
				if(j>=i)
				{
					count--;
				}
				else
				{
					count++;
				}
			}
		}printf("\n");
	}
}
*/
// 15)
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%c",ch);
				if(j>=i)
				{
					ch--;
				}
				else
				{
					ch++;
				}
			}
		}
		printf("\n");
	}
}
*/

//16)
/*
{
	int i,j,ch;
	for(i=1;i<=5;i++)
	{ ch=1;
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",ch);
				if(j>=5)
				{
					ch--;
				}
				else
				{
					ch++;
				}
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}*/
/*
//17)
{
	int i,j,count=i,f=1;;
	for(i=1;i<=5;i++)
	{
		count=i;
		for(j=1;j<=17;j++)
		{
			if(j>=10-i&&j<=8+i&&f==1)
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

// 18) solid diomand
/*
{
	int i,j,f=1;
	for(i=1;i<=10;i++)
	{
		f=1;
		for(j=1;j<=9;j++)
		{
			if((i<=5&&j>=6-i&&j<=4+i&&f==1)||(i>=6&&j>=i-5&&j<=15-i&&f==1))
			{
				printf("*");
				f=0;
			}
	
			else
			{
				printf(" ");
				f=1;
			}
		}
		printf("\n");
	}
}
*/
// 19) hollow diamand
/*
{
	int i,j,f=1;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=9;j++)
		{
			if((i<=5&&j==6-i||j==4+i)||(i>=6&&j==i-5||j==15-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

// 20) solid half dimond
/*
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i<=5&&j<=i)||(i>=6&&j<=10-i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
*/

// Different type of solid prigram
// 21)
/*
{
	int i,j,count=2;
	{
		for(i=1;i<=7;i++)
		{
			if(i<=4)
			{
				count++;
			}
			else
			{
				count--;
			}
			for(j=1;j<=4;j++)
			{
				if(((i<=4&&j<=i)||(i>=5&&j<=8-i)))
				{
					printf("%d",count);
				
				}
				else
				{
					printf(" ");
				}
			
			}
			printf("\n");
		}
	}}
	*/
	
	// 22)
	/*
	{
		
		int i,j,count=0,k=1,f=1;
		
			for(i=1;i<=8;i++)
			{
				if(i<=4)
				{
					count++;
				}
				else if(i==5)
				{
				
				count=4;
			}
				else
				{
					count--;
				}
				for(j=1;j<=k;j++)
				{
					if(j%2==1)
					printf("%d",count);
					else
					printf("*");
				}
				if(i<4)
				k=k+2;
				else if(i==4)
				k=7;
				else
				k=k-2;
			printf("\n");
	}
		}
		*/
		
// 23)  
/*
{
	int i,j,count=0,k=1;
	for(i=1;i<=7;i++)
	{
		count=1;
		for(j=1;j<=k;j++)
		{	
		 if(j==1||j==k)
		 {
		 	printf("*");
		 }
		 else
		 {
		 	printf("%d",count);
		 	if(j<i)
		 	count++;
		 	else
		 	count--;    
		 }
		}
		printf("\n");
		if(i<4)
		{
			k=k+2;
			
		}
		else
		{
			k=k-2;
		}
	}
}
*/
/*
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if((i<=5&&j<=6-i||j>=4+i)||(i>=6&&j<=i-5||j>=16-i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
*/

// 24)
/*
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			if((i<=5&&(j<=i||j>=11-i))||(i>=6&&(j<=11-i||j>=i)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/
// 25) diogonal and side of rectangle
/*
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1||j==1||j==7||i==7||j==i||j==8-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
		
	}
	*/
	/*
	// 25)
	{
		int i,j;
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				if((i<=5&&(j==5||i==5||j==6-i||j==4+i))||(i>=6&&(j==5||j==i-4||j==14-i)))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}*/
	// 26 27 ) left and right arrow
	/*
	{
		int i,j;
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				if(((i<=5&&(i==5||j==4+i))||(i>=6&&(j==14-i))))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			printf("\n");
		}
	}
		*/
		/*
		{
			int i,j;
			for(i=1;i<=9;i++)
			{
				for(j=1;j<=9;j++)
				{
					if((i<=5&&(j==6-i||i==5))||(i>=6&&(j==i-4)))
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
		*/
		/*
		//28,29)Rhombus Pattern Program in C,
		{
			int i,j;
			for(i=1;i<=4;i++)
			{
				for(j=1;j<=7;j++)
				{
					if(j>=5-i&&j<=8-i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}printf("\n");
			}
		}
		*/
		/*
	{
			int i,j;
			for(i=1;i<=4;i++)
			{
				for(j=1;j<=7;j++)
				{
					if((i==1&&j>=6-i&&j<=8-i)||(i==4&&j>=6-i&&j<=8-i)||j==5-i||j==8-i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}printf("\n");
			}
		}	*/
// 30) Traingle with numbers
/*
{
	int i,j,f=1,count=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i&&f==1)
			{
				printf("%d",count);
				count++;
				f=0;
			}
			else
			{
				printf(" ");
				f=1;
			}
		}printf("\n");
	}
	}	*/
	/* 31)C program to print following pyramid 
123454321 
1234321 
12321 
121 
1 */
/*
{
	int i,j,count=1,k=11;
	for(i=1;i<=5;i++)
	{count=1;
	if(i>=1)
			{
				k=k-2;
			}
		for(j=1;j<=9;j++)
		{
			if(j>=1&&j<=k)
			{
				printf("%d",count);
				if(j<=5-i)
				{
					count++;
				}
				else{
					count--;
				}
			}
			else{
				printf(" ");
			}
			
		}printf("\n");
		}	
	}*/
	//32)
	/*C program to print character pyramid as given below: 
A 
26 | P a g e
B C 
D E F 
G H I J 
K L M N O */
/*
{
	int i,j;
	char ch=66;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i+1)
			{
				printf("%c",ch);
				ch++;
			}
			else{
				printf(" ");
			}
		}printf("\n");
	}
}*/

/*
  33)C program to print following Pyramid: 
0 0 
01 01 
010 010 
0101 0101 
0101001010 
*/
/*
{
	int i,j,count=0;
	for(i=1;i<=5;i++)
	{count=0;
		for(j=1;j<=10;j++)
		{ 
			if((j<=i||(j>=6&&j<=5+i)))
			{
				printf("%d",count);
			}
			else
			{
				printf(" ");
			}
			if((j<=4&&j%2==1)||(j>=6&& j%2==0))
	{
	
	count=1;
}
else
{
	count=0;
}
		}
		printf("\n");
	}
}
*/
/*
 34)C program to print following Pyramid: 
1 1 
12 21 
123 321 
1234 4321 
1234554321 */
/*
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=10;j++)
		{
			if((j<=i)||(j>=6&&j<=5+i))
			{
				printf("%d",count);
				if(j<i)
				count++;
				else if(j==i)
				count=j;
				else
				count--;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/
/*
 35)C program to print following pyramid 
123454321 
1234321 
12321 
121 
1 */
/*
{
	int i,j,count=1;
	for(i=1;i<=5;i++)
	{
		count=1;
		for(j=1;j<=9;j++)
		{
			if(j<=(11-i)-i)
			{
				printf("%d",count);
				if(j<=5-i)
				count++;
				else
				count--;
		}
		else
		{
			printf(" ");
		}
	}printf("\n");
	
}}
*/
/*
 36)C program to print following pyramid: 
A 
BAB 
CBABC 
DCBABCD 
EDCBABCDE 
*/
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch=64+i;
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%c",ch);
				if(j<i)
				ch--;
				else
				ch++;
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}*/

/*
 37)C program to print following pyramid 
A 
ABA 
ABCBA 
ABCDCBA 
ABCDEDCBA
*/
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if(j<=(2*i)-1)
			{
				printf("%c",ch);
				if(j<i)
				ch++;
				else
				ch--;
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
} 
*/
/*
 38)C program to print following character pyramid: 
ABCDEDCBA 
ABCD DCBA 
ABC CBA 
AB BA 
A A*/
/*
{
	int i,j;
	char ch;
	for(i=1;i<=5;i++)
	{
		ch='A';
		for(j=1;j<=9;j++)
		{
			if((j<=6-i||(j>=6&&j<=11-i)))
			{
				printf("%c",ch); 
				if(j<=5-i)
				ch++;
			
				else if(j>=5)
				ch--;
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	
	}}
	*/
	//floyd tringle
	{
		int i,j,count=1,f=1;
		for(i=1;i<=5;i++)
		{
			count=1;
			for(j=1;j<=9;j++)
			{
				if(j==6-i||(i==5&&f==1))
				{
					printf("%d",count);
					
					f=0;
				 if(i==5);
					{
						count++;
					}
				}
				else if(j==4+i)
				{
					count=i;
					printf("%d",count);
				}
				else
				{
					printf(" ");
					f=1;
				}
			}printf("\n");
		}
	}
	