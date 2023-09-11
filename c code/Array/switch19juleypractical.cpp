#include<stdio.h>
int main()

	{
 	int ch,index1,value,max,min,searchValue,i,flag=0;
 	//printf("Enter the no");
 	//scanf("%d",&no); 	
 	int a[8]={1,2,4,3,5,6,8,9 };
 	int len = sizeof(a)/sizeof(a[0]);
 	printf(" size of array %d\n",len);
 	 for ( i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
 	printf("\n1. Insert Element At Specific Index\n");
 	printf("2. Insert Element At End of Array\n");
 	printf("3. Insert Element At start of Array\n");
 	printf("4. Delete Element at Specific Index\n ");
 		printf("5. Delete Element at End of Array\n ");
		 	printf("6. Delete Element at Start of Array\n ");
 			printf("7. Search Specific Element by value\n ");
 			printf("8. Show Element at Specific Index\n ");
				 	printf("9. Find min \n");
 					printf("10. Find max\n ");
 					printf(" Enter a choice");
 					scanf("%d",&ch);
 					switch(ch)
 					{
 						case 1:
 							{
 								printf(" Enter a index");
 								scanf("%d",&index1);
 								printf(" Enter a value");
 								scanf("%d",&value);
 								a[index1]=value;
								 printf(" updated array\n");
								 for(i=0;i<len;i++);
								 {
								 	printf("%d",a[i]);
															  }
															  }
															  break;
															  case 2:
															  {
															  	printf(" Enter a value");
															  	scanf("%d",&value);
															  	a[len-1]=value;
															  	printf(" updated array");
															  	for(i=0;i<len;i++)
															  	{
															  		printf("%d",a[i]);
																  }
															}
															break;
															case 3:
																{
																	printf(" enter a value");
																	scanf("%d",&value);
																	a[i]=value;
																	printf(" update array");
																	for(i=0;i<len;i++)
																	{
																		printf("%d",a[i]);
																	}
																}
																break;
																case 4:
																	{
																		 printf("Enter the index  of the array:\n");
		 scanf("%d",&index1);
		 	 for ( i = index1; i <len-1; i++) {
        a[i] = a[i + 1];
    }
     printf("Updated array: \n");
    for ( i = 0; i < len-1; i++) {
        printf("%d ", a[i]);
    }
}
break;
case 5:
		 		printf("Updated array: \n");
    for (i = 0; i < len-1; i++) {
        printf("%d ", a[i]);
		 	}
		 	break;
		 	case 6 :
		 			printf("Updated array: \n");
    for ( i = 1; i < len; i++) {
        printf("%d ", a[i]);
		 	}
		 		break;
		 		case 7:
		 			printf("Enter the Search value");
		 			scanf("%d",&searchValue);
		 				printf("%d\n",len);
		 	 for ( i = 0; i < len; i++) {
		 	 	
        if (a[i] == searchValue) {
        		printf("%d",a[i]);
        		flag=1;
        		break;
        	}
        }
        	 if (flag==1) {
        printf("The value %d is found  .\n", searchValue);
    } else {
        printf("The value %d is not present in the array.\n", searchValue);
    }
		 			break;
		 			
		 			case 8:
		 					printf("Enter the index  of the array:\n");
		 scanf("%d",&index1);
		 value = a[index1];
		 printf("%d\n",value);
		 				break;
		 					case 9:
		 				min=a[0];
                       	for(i=0; i<=4; i++)
						   {
		               	if(a[i]<min)
						   {
			               	min=a[i];
		                         	}
	                       }
	printf("The min value is %d",min);
		 				break;
		 					case 10:
		 					max=a[0];
	                    for(i=0; i<len; i++)
						{
		                     	if(a[i]>max)
								 {
			          	max=a[i];
		                        	}
                              	}
                        	printf("The max value is %d",max);
		 				break;
		 				default :
		 					printf(" invalid input ");
		 }
 }
																
