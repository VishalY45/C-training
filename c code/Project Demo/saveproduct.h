#include<stdio.h>
#include "product.h"
void insert(product p)
{
    FILE *fptr;
    fptr=fopen("D:\\c code\\Project Demo\\Product.txt","a");
   fprintf(fptr,"%s\t%d\t%d\n",p.name,p.id,p.price);
    fclose(fptr);
    printf("Data save success........\n");
}