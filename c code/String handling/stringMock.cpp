#include<stdio.h>
#include<string.h>
int main()

{
	char ch[90];
	printf("Enter a stirng\n");
	gets(ch);
	char skey[90];
	printf("Enter a search string\n");
	gets(skey);
	int count=0,f=0,j;
	for(int i=0;ch[i]!= '\0';i++)//good morning morn good morning
	{
		for(int j=0;skey[j]!= '\0';j++)
		{
			if(ch[i+j]!=skey[j])
			{
				
				break;
			}
		
		}
		if(skey[j]==  '\0' )
		{
			f=1;
			break;
		}
	}
	printf("%d",f);
	printf("%d",j);
if(f==1)
{
	printf("'%s'",skey);
}
else
{
	printf("vv");
}
}
/*
{
    char str1[100], str2[100];
    int i, j, found;

    printf("Enter a string: ");
    gets(str1);

    printf("Enter a search string: ");
    gets(str2);

    found = 0;
    
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (str2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("'%s' found in '%s'\n", str2, str1);
    } else {
        printf("'%s' not found in '%s'\n", str2, str1);
    }

    return 0;
}*/