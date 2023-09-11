#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "supplier.h"
#include "medicine.h"
#include "billview.h"
#include "customer.h"
#include "about.h"
   int main(){
   	   	int choice;
   	  do{
   	    printf("\n1:SUPPLIER: ");
		printf("\n2:MEDICINE: ");
		printf("\n3:CUSTOMER");
		printf("\n4:BILL : ");
		printf("\n5:ABOUT: ");
		printf("\n6.EXIT");
		printf("\nEnter Number For which Opration We Want See----> [1 To 6]\n");
   	scanf("%d",&choice);
   	switch(choice){
   		    
   		    case 1:
   		  	   {
   		  	    supplier();
   		  	   }
				 break;
   		  	case 2:
   		  		{
   		  		 medicine();
			    }
			break;
			case 3:
				{
					customer();
				}
			break;
			case 4:
				{
					bill();
				}
			break;
			case 5:
				{
					about();
				}
				break;
			default:
				printf("Thank You\n");
				exit(0);
				 }
   	}while(choice!=6);
}
