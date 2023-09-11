#include<stdio.h>
#include<conio.h>
int main()
{          //clrscr();
 int i,j;
 for(i=1;i<=4;i++)
 {
 for(j=1;j<=i;j++)
 {
 if(j<i &&j<=i)
 {
 printf("%d*",i);
 }
 else
 {
 printf("%d",i);
 }}
 printf("\n");
 }
 for(i=4;i>=1;i--)
 {
 for(j=1;j<=i;j++)
 {
 if(j<i)
 {
 printf("%d*",i);
 }
 else
 {
 printf("%d",i);

 }
 }printf("\n");
 }
 

 getch();
 }