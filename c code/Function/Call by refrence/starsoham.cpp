#include<stdio.h>
int main()
{
	int i,j,f=1,k=1;
	for(i=1; i<=5; i++){
	
	for(j=1; j<=9; j++){
		printf("\t");
		
		if(j>=6-i && j<=4+i){
			printf("%d",k*k);
			k++;
			
			
		}else{
			printf(" ");
			 
		}
	
	}
		printf("\n");
	}
}