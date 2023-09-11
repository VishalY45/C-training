//. Write a program in C to find the Floor and Ceil of the number 0 to 10 from a sroted array.

{
	int size,i,j,temp,f=0,no;
	printf(" ENter array size\n");
	scanf("%d",&size);
	int a[size];
	printf(" ENter array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if()
		}
	}