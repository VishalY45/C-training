#include<stdio.h>
int main()
{
	void getno(int);
	 getno(5);
	 return 0;
}
void getno(int x)
{
	if(x!=0)
	{
		printf("Good morning\n");
		getno(--x);
		
	}
	else
	{
		printf("End");
	}
}