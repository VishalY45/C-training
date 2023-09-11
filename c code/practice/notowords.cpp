#include<stdio.h>
int main()
{
	int rem,i,n,num=0;
	printf("Enter a no");
	scanf("%d",&n);
	while(n!=0)
	{
		num=(num*10)+(n%10);
		n=n/10;
	}
	while(num!=0)
	{
		switch(num%10)
		{
			case 0:
				printf("\n zero");
				break;
			case 1:
				printf("One");
				break;
				case 2:
					printf("\n two");
					break;
					case 3:
						printf("\n three");
						break;
						case 4:
							printf("\n four");
							break;
						case 5:
							printf("\nfive");
							break;
							case 6:
								printf("\n six");
								break;
								case 7:
									printf(" \n seven");
									break;
									case 8:
										printf("\n eight");
										break;
										case 9:
											printf("\nnine");
											break;
										}num=num/10;
									}
		}
	
