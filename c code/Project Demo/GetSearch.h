//#include<stdio.h>
int GetSearch(int sid)
{
	int f=0;
	FILE *fptr;
	product p;
    fptr=fopen("D:\\c code\\Project Demo\\Product.txt","r");
    while(fscanf(fptr,"%s%d%d",&p.name,&p.id,&p.price)!=-1)
    {
    	if(p.id==sid)
    	{
    		f=1;
    		break;
		}
	}
	if(f)
	{
		printf("%s\t%d\t%d\n",p.name,p.id,p.price);
		return 1;
	}
	else
	{
		return 0;
	}
	fclose(fptr);
}