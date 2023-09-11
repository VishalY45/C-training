#include<stdio.h>
int main()
/*
{
	int no,choice;
	printf(" Enter a no");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf(" monday");
			break;
				case 2:
			printf(" tuesday");
			break;
				case 3:
			printf(" wensday");
			break;
				case 4:
			printf(" thursday");
			break;
				case 5:
			printf(" friday");
			break;
				case 6:
			printf(" saterday");
			break;
				case 7:
			printf(" sunday");
			break;
			default:
			printf(" invalid no");
	}
}*/

/*
// month
{
	int no;
	printf(" Enter a no");
	scanf("%d",&no);
	switch(no)
	{
		case 1:
			printf(" 31 days");
			break;
			case 2:
				printf(" 28 or 29");
				break;
				case 3:
					printf(" 31 days");
					break;
					case 4:
						printf(" 30 days");
						break;
						case 5:
							printf(" 31 days");
							break;
							case 6:
								printf(" 30 days ");
								break;
								case 7:
									printf("31 days");
									break;
									case 8:
										printf(" 31 days");
										break;
										case 9:
											printf(" 30 days");
											break;
											case 10:
												printf(" 31 days");
												break;
												case 11:
													printf(" 30 days");
													break;
													case 12:
														printf(" 31 days");
														break;
														default:
															printf(" invalid no");
														}
													}
													*/

// vowel or not	
/*
{
	char ch;
	printf(" Enter a charcter\n");
	scanf("%c",&ch);
	
			switch(ch)
			{
				case 'a':
					case 'e':
					case 'i':
						case 'o':
					case 'u':
					case 'A':
						case 'I':
					case 'O':
					case 'E':
						case 'U':
							printf(" charcter is vowel");
							break;
					
						default:
							printf(" charcter is consonet");
			}
		
	}
	*/
	
	/*
	
	{
		int a,b;
		printf(" Enter two no");
		scanf("%d%d",&a,&b);
		switch(a>b)
		{
			case 0:
				printf(" b is greather");
			break;
			case 1:
				printf(" a is grether");
				break;
		}
	}
	*/
	
	/*
	{
		int no;
		printf(" Enter a no\n");
		scanf("%d",&no);
		switch(no%2==0)
		{
			case 0:
				printf(" no is odd");
				break;
				case 1:
					printf(" no is even");
					break;
					default:
									printf(" invalid input");
					
				
		}
	}*/
	/*
	{
		int no;
		printf(" Enter a no\n");
		scanf("%d",&no);
		switch(no>0)
		{
			case 1:
				printf(" no is pasitive");
				break;
				case 0:
					switch(no<0)
					{
						case 1:
							printf("no is nagative");
							break;
							case 0:
								printf(" no is zero");
								break;
							}
							break;
							default:
									printf(" invalid input");
							
					}
		}*/
		
		{
			float a,b,c;
			int choice;
			printf(" \n1 addition");
			printf(" \n2 subtraction");
			printf(" \n3 multiplication");
			printf(" \n4 division");
			printf("\n Enter a choice\n");
			scanf("%d",&choice);
			printf(" enter 2 no");
			scanf("%f%f",&a,&b);
			switch(choice)
			{	
			     case 1:
					printf(" add=%f",a+b);
					break;
					case 2:
						printf(" sub=%f",a-b);
						break;
						case 3:
							printf(" mul=%f",a*b);
							break;
							case 4:
								printf(" div=%f",a/b);
								break;
								default:
									printf(" invalid input");
								
								
					 
			}
			
		}
	