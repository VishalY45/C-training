//WAP to  input two strings and check strings are isomorphic or not
#include<stdio.h>
#include<string.h>
int main()
{
  int i,j,xyz[256]={0};
  char ch[90],ch1[90];
  printf(" Enter a string\n");
  gets(ch);
  int len=strlen(ch);
  printf(" Enter a string\n");
  gets(ch1);
  int len2=strlen(ch1);
  if(len!=len2)
  {
  printf(" not a isomarphic");
}
 int x[256]={0};//paper title
  	for(int i=0;i<len;i++)
  	{
  		if(xyz[ch[i]]==0)//p=0
  		{
  			if(x[ch1[i]])//t
  			{
  				printf("not a isomorphic");
			  }
			 xyz[ch[i]]=ch1[i];
			 x[ch1[i]]=1; 
		  }
		  else if(xyz[ch[i]]!=ch1[i])
		  {
		  	printf(" not a isomarhic");
		  }
	  }
	  printf(" isomarhic");
}
 