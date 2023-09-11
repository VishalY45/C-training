#include<stdio.h>
int main (){
	
	
	int j,i,k=1,m=1;
	
	
	for(i=1; i<=8; i++)
	{
		
			     
		for(j=1; j<=k; j++)
		{
		
		
		   
		   if(j%2==1)
		   {
			printf("\t%d",m);
			   m++;
		    }
		   	
			
		    else
		    {
			
		      printf("\t*");
		}
	}
   if(i<4)
		  {
		  	k=k+2;
		  	
		  }
		  else if(i==4)
		  k=7;
		  else
		  {
		  	k=k-2;
		  }
		  	printf("\n");
		}
	
	}