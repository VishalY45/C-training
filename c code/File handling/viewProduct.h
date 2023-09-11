void viewProduct(){
	FILE *fptr;
	Product p;
fptr=fopen("D:\\c code\\Project Demo\\Product.txt","a");
	while(fscanf(fptr,"%s%d%d",&p.name,&p.id,&p.price)!=-1){
		printf("%s\t%d\t%d\n",p.name,p.id,p.price);
	}
	fclose(fptr);
}

