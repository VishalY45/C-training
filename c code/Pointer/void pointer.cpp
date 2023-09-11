#include<stdio.h>
int main()
{
	int *ptr;
	int a=300;
	float b=333;
//	ptr=(int*)&a;
	
	//printf("%d\n",*(int*)ptr);
	ptr=(int*)&b;
	printf("%f",*(float*)ptr);
}