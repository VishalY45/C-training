// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int no,count,num,i;
    printf("enter the no");
    scanf("%d",&no);

for(num=1;num<=no;num++)
{
    count=0;
    for(i=2;i<=num/2;i++){
    if(num%i==0){
        count++;
        break;
    }}
    
    if(count==0 && num!=1){
        printf("prime%d\n",num);
    }
    }
    }
    

