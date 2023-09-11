#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,size,i,max=0;
	printf("Enter size of array\n");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("\nEnter values in array\n");
	for(i=0; i<size;i++){
		scanf("%d",&ptr[i]);
	}
	//max=ptr[0];//base address+0*size
	int size2;
	printf("Enter size");
	scanf("%d",&size2);
	ptr=(int*)realloc(ptr,sizeof(int)*size2);
	for(i=0;i<size+size2;i++)
	{
		if(ptr[i]>max)
		   max=ptr[i];
	
	}
	printf("\nMax value is %d\n",max);
	return 0;
}
