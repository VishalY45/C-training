/*C program to print following pyramid 
123454321 
1234321 
12321 
121 
1 */
/*
{
	int i,j,count=1,k=11;
	for(i=1;i<=5;i++)
	{count=1;
	if(i>=1)
			{
				k=k-2;
			}
		for(j=1;j<=9;j++)
		{
			if(j>=1&&j<=k)
			{
				printf("%d",count);
				if(j<=5-i)
				{
					count++;
				}
				else{
					count--;
				}
			}
			else{
				printf(" ");
			}
			
		}printf("\n");
		}	
	}