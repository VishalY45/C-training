#include<stdio.h>
int main(){
		int size;
	int a[size],i,index,value;
	
	printf(" Enter the Size of the Array");
	scanf("%d",&size);
		printf("\n Enter  5 Elements in array\n");
	for(i=0; i<size-1; i++){
		scanf("%d",&a[i]);
		
	}
		printf("\n Enter the  index value  \n");
		scanf("%d",&index);
		printf("\n Enter the value  \n");
		scanf("%d",&value);
		
	for(i=0; i<size; i++){
			if(i==index+1)
			a[i]=value;
			printf("%d",a[i]);
	}
     
	}