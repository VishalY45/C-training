#include<stdio.h>
int main()
{

  int size,i,j,*ptr,mid,end,temp;
  printf(" Enter a size\n");
  scanf("%d",&size); //5
  int a[size];
  printf(" ENter array element\n");
  
  for(i=0;i<size;i++)  //1 2 3 4 5  
  {
  	scanf("%d",&a[i]); //ptr[]   
  }
  
  mid=size/2;
  end=size-1;
  
  ptr=a;
 
  for(i=0;i<=mid;i++)
  {
  	temp=*(ptr+i);
  	*(ptr+i)=*(ptr+end);
  	*(ptr+end)=temp;
  	end--;
  }
   printf("\nDisplay Reverse element in array:\n");
    for(i=0;i<size;i++)  //1 2 3 4 5  
  {
  	printf("%d",*ptr);
	  ptr++; //ptr[]   
  }
}