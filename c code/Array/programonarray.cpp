#include<stdio.h>
int main()
// wap to enter a element and calculate its sum
/*{
	int a[5],i,sum=0;
	printf(" Enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" display matrix\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n Sum is:-\n");
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
}*/
//------------------------------------------------------------------------------------------
// 2) wap to enter element and find minumum and maximum no;
/*{
	int a[5],min,max,i,j;
	printf(" Enter a array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display matrix\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			min=a[j];
		
		if(a[i]<a[j])
			max=a[j];
		
		}
		
		
	}
	printf(" \nMinimum no %d",min);
	printf(" \nMaximum no %d",max);
}
*/
//------------------------------------------------------------------------------------------------
// 3) wap to enter five no and print in aseniding order
/*{
	int a[5],i,j;
	printf(" Enter a element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display matrix\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" \nAfter ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}*/
//-------------------------------------------------------------------------------------------
//4)wap to insert element on specified postion in array
/*{
	int a[6],i,j,index,value;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a array element\n");
	for(i=0;i<(len-1);i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display matrix\n");
	for(i=0;i<(len-1);i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n ENter a index & value");
	scanf("%d%d",&index,&value);
	for(i=(len-2);i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	printf(" After inserting\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",a[i]);
	}
}*/
//-------------------------------------------------------------------------------------
// 5) wap to enter array element and find the missing no
/*{
	int a[5],i,j,diff;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter array elemnt\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display matrix\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf(" Missing element\n");
	for(i=0;i<5-1;i++)
	{
			for(j=a[i];j<(a[i+1]-1);)
			{
				printf("%d\t",++j);
			}
		}
	}
*/
//-----------------------------------------------------------------------------------------------------
// 6) Wap to enter five element and printf in reverse.
//
/*{
	int a[5],i,j,temp;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" ENter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf(" After reverse\n");
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<5;j++)
		{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
			
		}
	}
	for(i=0;i<5;i++)
	{
		printf("a[%d]--%d\n",i,a[i]);
	}
	}
	*/
//-----------------------------------------------------------------------------------------
// 7) find the occrance
/*{
	int a[10],i,j,f=-1,count=0;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" Enter a array element\n");
	for(i=0;i<len;i++)
	{
		scanf("%d",&a[i]);
	}
	int fr[10];
	printf(" Display array\n");
	for(i=0;i<len;i++)
	{
		printf(" %d\t",a[i]);
	}
	for(i=0;i<len;i++)
	{count=1;
		for(j=(i+1);j<len;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				
				fr[j]=f;
			}
		}
		if(fr[i]!=f)
		fr[i]=count;
	}
	for(i=0;i<len;i++)
	{
		if(fr[i]!=f)
		printf("\na[%d]--->%d\n",a[i],fr[i]);
	}
}*/
//------------------------------------------------------------------------------------------------
/* 8)Write a program in C to separate odd and even integers in separate arrays ?
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47
*/
/*{
	int a[5],i,j;
	printf(" ENtera array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" \ndisplay element ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nThe even no:-");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("%d\t",a[i]);
	
	}
	printf(" \nThe odd no:-");
		for(i=0;i<5;i++)
	{
		if(a[i]%2==1)
		printf("%d\t",a[i]);
	
	}
}*/
//----------------------------------------------------------------------------------------------
// 9)
/*
). Write a program in C to delete an element at desired position from an array.
Test Data :
Input the size of array : 5
Input 5 elements in the array in ascending order:
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Input the position where to delete: 3
Expected Output :
The new list is : 1 2 4 5
*/
{
	int a[5],i,j,temp,index,f=0;
	int len=sizeof(a)/sizeof(a[0]);
	printf(" enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("DIsplay matrix\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf(" \nEnter a value");
	scanf("%d",&index);
	for(i=0;i<len;i++)
	{
		if(a[i]==index)
		{
			f=1;
			break;
			
		}
	}
	if(f)
	{
	for(j=i;j<len;j++)
	{
		printf("%d",i);
		a[j]=a[j+1];
		}	
	}
	else
	{
		printf("\n Value is not found");
	}
	for(i=0;i<len-1;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	}
//---------------------------------------------------------------------------------------
// 10)
/*Write a program in C to find the second largest element in an array ?
Test Data :
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 9
element - 2 : 1
element - 3 : 4
element - 4 : 6
Expected Output :
The Second largest element in the array is : 6*/
/*{
	int a[5],i,j;
	printf(" Enter array elemnt\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display matrix\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]---->%d\n",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf(" Second largest no :-%d",a[1]);
	
}*/
//-----------------------------------------------------------------------------------
// 11)
/*Write a program in C to find the majority element of an array ?
A majority element in an array A[] of size n is an element that appears more than n/2 times (and 
hence there is at most one such element).
Expected Output :
The given array is : 4 8 4 6 7 4 4 8
There are no Majority Elements in the given array.*/
/*{
	int a[10],i,j,count=0,skey;
	printf(" Enter a arry element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" dispaly array\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" \nEnter a no");
	scanf("%d",&skey);
	for(i=0;i<10;i++)
	{
		if(a[i]==skey)
			{
				count++;
			
		}
	}
	if(count>4)
	{
		printf(" The no is majority element");
	}
	else
	{
		printf(" The given no id not majority element");
		}
	}*/
//---------------------------------------------------------------------------------------
//12)
/*Write a program in C to find the ceiling in a sorted array?
Given a sorted array in ascending order and a value x, the ceiling of x is the smallest element in array 
greater than or equal to x, and the floor is the greatest element smaller than or equal to x.
Expected Output : 1 3 4 7 8 9 9 10
The given array is :
The ceiling of 5 is: 7*/
/*{
	int a[5],i,j,ceil;
	printf(" Enter array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDispaly matrix");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
	printf("\nEnter a no");
	scanf(" %d",&ceil);
	for(i=0;i<5;i++)
	{
		if(a[i]>=ceil)
		{
		   printf(" The ceil of %d is %d",ceil,a[i]);
		   break;	
		}
	}
}*/
//--------------------------------------------------------------------------------------
//13)
/* Write a program in C to find the smallest missing element from a sorted array?
Expected Output :
The given array is : 0 1 3 4 5 6 7 9
The missing smallest element is: 2
*/
/*{
	int a[7],i,j,diff;
	printf(" enter array element\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" missing element:-");
	for(i=0;i<7;i++)
	{
		diff=a[i+1]-a[i];
		if(diff>1)
		{
			for(j=a[i];j<a[i+1]-1;)
			{
				printf("%d\n",++j);
			}
		}
	}
}*/
//----------------------------------------------------------------------------------------
//14)
/*) Write a program in C to to print next greater elements in a given unsorted array. Elements for 
which no greater element exist, consider next greater element as -1.
Expected Output :
The given array is : 5 3 10 9 6 13
Next Bigger Elements are:
Next bigger element of 5 in the array is: 10
Next bigger element of 3 in the array is: 10
Next bigger element of 10 in the array is: 13
Next bigger element of 9 in the array is: 13
Next bigger element of 6 in the array is: 13
Next bigger element of 13 in the array is: -1
Next Bigger Elements Array:
10 10 13 13 13 -1
*/
/*{
	
	int i,j,temp=-1,size;
	printf(" Enter the size of array\n");
	scanf("%d",&size);
	int a[size],c[size];
	printf(" enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display arraay\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)//4 6 8 9
	{
		c[i]=-1;
		for(j=i+1;j<size;j++)
		{
		
			if(a[i]<a[j])
			{
				
				c[i]=a[j];
				break;
			}
		}
		printf("\nNext bigger element of %d in the array is%d\n",a[i],c[i]);
	}
	printf(" Next Bigger Elements Array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",c[i]);
	}
}*/

//------------------------------------------------------------------------------------------------
// 15)
/*Write a program in C to find two elements whose sum is closest to zero
Expected Output :
The given array is : 38 44 63 -51 -35 19 84 -69 4 -46
The Pair of elements whose sum is minimum are:
[44, -46*/
/*{
	int size,i,j;
	printf(" Enter a size of array\n");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",a[i]);
	}
	printf("\n Display matrix");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
	int	sum=0;
		for(j=i+1;j<size;j++)
		{
		  sum=a[i]+a[j];
		  if(sum<(a[i]+a[j]))
		  {
		  	
			  }	
		}
	}
	*/
	
//--------------------------------------------------------------------------------------------------------
// 16)
/*) . Write a program in C to find a pair with given sum in the array.
Expected Output :
The given array : 6 8 4 -5 7 9
The given sum : 15
Pair of elements can make the given sum by the value of index 0 and 5
*/
/*{
	int size,i,j,sum;
	printf(" Enter array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display matrix\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter a sum");
	scanf("%d",&sum);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(sum==a[i]+a[j])
			{
				printf(" The pair is %d,%d\n",a[i],a[j]);
			}
		}
	}
}*/
//----------------------------------------------------------------------------------------------
// 16)
/*
Write a program in C to merge two arrays of same size sorted in decending order.
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1
*/
/*{
	int s1,s2,s3,i,j,k;
	printf(" Enter the size of array\n");
	scanf("%d",&s1);
	int arr[s1];
	printf(" Enter array element\n");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf(" Enter the size of array\n");
	scanf("%d",&s2);
	int a1[s2];
	printf(" Enter array element\n");
	for(i=0;i<s2;i++)
	{
		scanf("%d",&a1[i]);
	}
	s3=s1+s2;
	int a3[s3];
	for(i=0;i<s1;i++)
	{
		a3[i]=arr[i];
	}
	for(j=0;j<s2;j++)
	{
		a3[i]=a1[j];
		i++;
	}
	for(i=0;i<s3;i++)//12345678910
	{
		for(k=0;k<s3-1;k++)
		{
			if(a3[k]<=a3[k+1])
			{
				int j=a3[k+1];
				a3[k+1]=a3[k];
				a3[k]=j;
			}
		}
	}
	for(i=0; i<s3; i++)
    {
        printf("%d   ",a3[i]);
    }
	printf("\n\n");
}*/
//----------------------------------------------------------------------------------------------------
// 17)
/*
 Write a program in C to find a subarray with given sum from the given array?
Expected Output :
The given array is : 3 4 -7 1 3 3 1 -4
[0..1] -- { 3 4 }
[0..5] -- { 3 4 -7 1 3 3 }
[3..5] -- { 1 3 3 }
[4..6] -- { 3 3 1 }*/
/*{
	int size,index1,index2,i,j,f=0;
	printf(" Enter array size\n");
	scanf("%d",&size);
	printf(" Enter a array elemant\n");
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter array index\n");
	scanf("%d%d",&index1,&index2);
	for(i=0;i<size;i++)
	{
		
			if(i>=index1&&i<=index2)
			{
			for(i=index1;i<=index2;i++)
				{
					printf("%d\t",a[i]);
				}	
			}
	}
}*/
// 18)---------------------------------------------------------------------------------------------------
/*Write a program in C to find if a given integer x appears more than n/2 times in a sorted array 
of n integers ?
Expected Output :
The given array is : 1 3 3 5 4 3 2 3 3
The given value is : 3
3 appears more than 4 times in the given array[*/
/*{
	int size,i,j,value,count=0;
	printf(" Enter a array size\n");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);	
	}
	printf(" Dispay matrix\n");
	for(i=0;i<size;i++)
	{
		printf(" %d\t",a[i]);
	}
	printf("\nEnter a value\n");
	scanf("%d",&value);
	for(i=0;i<size;i++)
	{
		if(a[i]==value)
		{
			count++;
		}
	}
	if(count>(size/2))
	{
		printf("%dappears more than %dtimes in the given array",value,count);
	}
	else
	{
		printf(" value is not no of half of size");
	}
}*/
//19)-----------------------------------------------------------------------------------
/*Write a program in C to move all zeroes to the end of a given array.
Expected Output :
The given array is : 2 5 7 0 4 0 7 -5 8 0
The new array is:
2 5 7 8 4 -5 7 0 0 0*/
/*{
	int size,i,j;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	j=0;
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Dispaly matrix\n");
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<size;i++)//12304
	{
		if(a[i]!=0)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			j++;
		}
	}
	printf("\n new array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
}*/
//20) 14-----------------------------------------------------------------------------------------------
/*) Write a program in C to rotate an array by N positions ?
Expected Output :
The given array is : 0 3 6 9 12 14 18 20 22 25 27
From 4th position the values of the array are : 12 14 18 20 22 25 27
Before 4th position the values of the array are : 0 3 6 9
After rotating from 4th position the array is:
12 14 18 20 22 25 27 0 3 6 9
*/
/*{
	int size,i,pos;
	printf(" Enter a size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array elemant\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" Enter position to remove\n");
	scanf("%d",&pos);//3
	int temp=0,j=0;
	for(i=0;i<size;i++)//1 2 3 4 5
	{
		if(i>pos)
		{
			a[temp]=a[i];//0=5
			temp++;
		}
	}
	for(i=pos;i>=0;i--)//3
	{
		a[temp+1]=a[j];//1   //
		j++;
	}
	//a[i]=a[j]+a[temp];
	for(i=0;i<size;i++)//
	{
		printf("%d\t",a[temp]);
	}
}*/
//---------------------------------------------------------------------------------------------------------------
// 21)
/*
) Write a program in C to find out the maximum difference between any two elements such that 
larger element appears after the smaller number.
Expected Output :
The given array is : 7 9 5 6 13 2
The elements which provide maximum difference is: 5, 13
The Maximum difference between two elements in the array is: 8*/
/*{
	int size,i,j,no1,no2;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" Array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display matrix\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf(" ENter two no find diffrance\n");
	scanf("%d%d",&no1,&no2);
	for(i=0;i<size;i++)
	{
		if(a[i]==no1)
		{
			for(j=0;j<size;j++)
			{
				if(a[j]==no2)
				{
					//sum=(no1-no2);
				printf("%d",(a[i]-a[j]));
				}
			}
		}
	}
}*/
// 22)--------------------------------------------------------------------------------------
/*Expected Output:
The given array is:
5 2 3 7 6 4 9 8
The distinct pairs for difference 5 are: [7, 2] [8, 3] [9, 4]
Number of distinct pairs for difference 5 are: 3
*/
/*{
	int size,i,j,dis,count=0;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nEnter distint no\n");
	scanf("%d",&dis);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if((a[i]-a[j])==dis)
			{
			printf("%d\t%d\n",a[i],a[j]);	
			count++;
			}
		}
	}
	printf("Number of distinct pairs for difference %d are %d",dis,count);
}*/
//23)--------------------------------------------------------------
/*The array range is [0..n-1] and the elements are in the range [0..k-1] and k<=n..
Expected Output:
The given array is:
2 3 3 5 3 4 1 7 7 7 7
The maximum repeating number is: 
*/
/*{
	int size,i,j,count=0,total=0,f;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
			count++;
			a[j]=-1;
			f=a[i];	
			}
		}
		if(count>total)
		{
			total=count;
		}
	}
	printf("The maximum repeating number is:%d",f);
}*/
//24)---------------------------------------------------------------------------------------
/*
Write a program in C to find the minimum distance between two numbers in a given array.
Expected Output:
The given array is:
7 9 5 11 7 4 12 6 2 11
The minimum distance between 7 and 11 is: 1
*/

/*{
	int size,i,j,index,index1;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf(" Enter to find distance between no");
	scanf("%d%d",&index,&index1);
	for(i=0;i<size;i++)
	{
		int count=0;
		if(a[i]==index)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[j]==index1)
				{
					count++;
					printf("The minimum distance between %d and %d is: %d",abs(index-index1));
				}
			}
		}
	}
}*/
// 25)----------------------------------------------------------------------------
/*) Write a program in C to find a pair with the given difference
Expected Output:
The given array is:
1 15 39 75 92
The given difference is: 53
The pair are: (39, 92)*/
/*{
	int size,i,j,diff;
	printf(" Enter array size");
	scanf("%d",&size);
	int a[size];
	printf(" Enter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" Display array\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
		
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
   printf("\nThe given difference is:");
	scanf("%d",&diff);
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if((a[i]-a[j])==diff)
			{
				printf("The pair are:%d %d\n",a[j],a[i]);
			}
		}
	}
}*/
//---26)------------------------------------------------------------------------

