#include<Stdio.h>
int main()
{
	int *ptr,i,a[5]={10,20,30,40,50};
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("[%d]-->%d---%u\n",i,*(ptr+i),ptr+i);
	}
}