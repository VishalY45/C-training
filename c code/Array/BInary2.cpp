#include<stdio.h>
int main()
{
	int a[10],flag=0,l=0,r,mid,skey,len,i;
	printf("Enter values in array\n");
	len=sizeof(a)/sizeof(a[0]);
	for(i=0; i<len;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter search key value\n");
	scanf("%d",&skey);
	r=(len-1);
	while(l<=r){
		mid=l+(r-l)/2;
		if(a[mid]==skey){
			flag=1;
			break;
		}
		if(a[mid]<skey){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	if(flag){
		printf("Value found ");
	}
	else{
		printf("value not found");
	}
	return 0;
}
