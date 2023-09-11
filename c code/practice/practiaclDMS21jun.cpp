#include<stdio.h>
int main()
/*
{
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
}*/
/*

{
	char c;
	printf(" Enter a char\n");
	scanf("%c",&c);
	if(c >='a' && c <='z')
	{
		printf(" Charcter is lowercasr %c",c);
	}
	else if (c >='A'&& c<='Z')
	{
		printf(" Character is uppercase %c",c);
	}
	else
	{
		printf(" It s a no lowecase and uppercase");
	}
}
*/

/*
{
	float a1,a2,a3,t;
	printf("  Enter a angle");
	scanf("%f%f%f",&a1,&a2,&a3);
	t=a1+a2+a3;
	if(t==180 && a1>0&&a2>0&&a3>0)
	{
		printf(" tringle is valid");
		
	}
	else
	{
		printf(" Tringle is not valid");
		
	}
}
*/

{
	float s1,s2,s3,s4,s5,s6,p,t;
	printf(" Enter five sub marrk\n");
	scanf("%f%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5,&s6);
	t=s1+s2+s3+s4+s5+s6;;
	printf(" \nTotal is %f",t);
	 p=((t/600)*100);
	printf(" \n percentage is %.2f",p);
	if(p>=70&&p<=100)
	printf(" A grade");
	else if(p>=60&&p<70)
	printf(" B grade");
	else if(p>=50&&p<60)
	printf("C grade");
	else if(p>=40&&p<50)
	printf("D grade");
	else
	printf(" fail");	
}