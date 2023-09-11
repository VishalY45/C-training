#include<stdio.h>
int main()

{
	int no,i=1;
	printf("Enter a no\n");
	scanf("%d",&no);
	if(no%5==0&&no%11==0)
	{
		printf(" no is divisiable by 5 and 11 %d",no);
	}
	else
	{
		printf(" It is not divisiable by 5 and 11");
	}
}



// CHeck vowel or not
/*
{
	char ch;
	printf(" Enter a charcter\n");
	scanf("%c",&ch);
	if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')|| (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
	{
		printf(" charcter is vowel");
	}
	else
	{
		printf(" charcter is consonet");
	}
}
*/

/*
//
{
	float s1,s2,s3,s4,s5,p,t;
	printf(" Enter five sub marrk\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	printf(" \nTotal is %f",t);
	p=t/5;
	printf(" \n percentage is %.2f",p);
	if(p>=90)
	printf(" A grade");
	else if(p>=80&&p<90)
	printf(" B grade");
	else if(p>=70&&p<80)
	printf("C grade");
	else if(p>=60&&p<70)
	printf("D grade");
	else if(p>=40&&p<60)
	printf(" E grade");
	else
	printf(" F grade");	
}
*/

/*
{
	float gs,basic,hra,da;
	printf(" Enter a basic sallery\n");
	scanf("%f",&basic);
	if(basic<=10000)
	{
		hra=(basic*20)/100;
	printf(" %f",hra);
		da=(basic*80)/100;
	}
	else if(basic<=20000)
	{
		hra=(basic*25)/100;
		da=(basic*90)/100;
	}
	else
	{
		hra=(basic*30)/100;
		da=(basic*95)/100;
	}
	gs=basic+hra+da;
	printf(" \nGross sallery is %f",gs);
}
*/


/*
// find month

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


// profit or loss 

/*	{
	int p,l,price,sp;
	printf("\n Enter a product price\n");
	scanf("%d",&price);
	printf("\n Enter a selling price");
	scanf("%d",&sp);
	if(sp>price)
	{
		p=sp-price;
		printf("\n Profit is %d",p);
		
	}
	else
	{
		l=price-sp;
		printf(" loss is %d",l);
	}

	}	*/
	/*
	
	{
		char ch;
		printf(" Enter a charcter :-\n");
		scanf("%c",&ch);
		if(ch>='a' && ch<='z')
		{
			printf(" \n Charcter is lowercase");
			
		}
		else if(ch>='A'&&ch<='Z')
		{
			printf("\n charcter is uppercase");
		}
		else {
			printf(" Weather is not charcter ");
		}
	}*/