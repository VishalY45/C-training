#include <stdio.h>

int main() {
	
    int size1,size2,i,j,k,mergedArr[size1+size2],index;
   
         printf("Enter the size of the array: ");
             scanf("%d", &size1);
              int arr1[size1];
              size1 = sizeof(arr1) / sizeof(arr1[0]);
               printf("Enter the elements of the array:\n");
                    for ( i = 0; i < size1; i++) 
					{
                          scanf("%d", &arr1[i]);
                    }
                      
                    printf("Enter the  First size of the array: ");
                      scanf("%d", &size2);
                    int   arr2[size2];
                       size2 = sizeof(arr2) / sizeof(arr2[0]);
                            printf("Enter the  Second elements of the array:\n");
                                   for ( i = 0; i < size2; i++) 
								   {
                                     scanf("%d", &arr2[i]);
		                            }
                                     
                                          mergedArr[size1 + size2];
    										 i = 0, j = 0, k = 0;

                                       // Merge the two sorted arrays
                                             while (i < size1 || j < size2) {
                                               if (arr1[i] <= arr2[j]) {
                                                        mergedArr[k] = arr1[i];
                                                                 i++;
                                             } else {
                                                  mergedArr[k] = arr2[j];
                                                   j++;
                                                 }
                                                    k++;
                                               }

                                      // Copy remaining elements of arr1
                                 while (i < size1) {
                                           mergedArr[k] = arr1[i];
                                                       i++;
                                                       k++;
                                            }

                                       // Copy remaining elements of arr2
                               while (j < size2)
							    {
                                           mergedArr[k] = arr2[j];
                                                   j++;
                                                    k++;
                                }

                                         printf("Merged array: ");
                                      for ( index = 0; index < k; index++)
									   {
                                         printf("%d ", mergedArr[index]);
                                      }
                                     

                                           return 0;
                          }