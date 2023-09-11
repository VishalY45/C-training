/*/WAP input 10 values in array find occurrence of array?
 Example: 10 20 30 10 20 30 10 20 30 10 
10 ----- 4
20 ----- 3
*/

#include<Stdio.h>
int main()
{
	int a[10],i,j,f=-1,count=0;
	int fr[10];
	int lenght=sizeof(a)/sizeof(a[0]);
	printf(" Entr element of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		count=1;
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				fr[j]=f;
			}
		}
			if(fr[i]!=f)
			{
				fr[i]=count;
			}
			
		
	}
	for(i=0;i<10;i++)
	{
		if(fr[i]!=f)
		printf("\n a[%d]--->fr[%d]",a[i],fr[i]);
	}
}
	