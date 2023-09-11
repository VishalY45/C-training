#include<iostream>
using namespace std;
class strcal{
	char *ptr;
	public:
		void getstring(char a[])
		{
			_flushall();
			ptr=a;
		}
		int dhow()
		{_flushall();
			int i=0,sum=0;
			while(ptr[i]!='\0')
			{
				if(ptr[i]>=48&&ptr[i]<=57)
				{
					int sum=sum+(ptr[i]-48);
					cout<<sum;
				}
				
				i++;
				cout<<sum;
			}
			
			return sum;
		}
};
int main()
{
	char a[90];
	cout<<"Enter a string";
	gets(a);
	strcal s1;
	_flushall();
	s1.getstring(a);
	int result=s1.dhow();
	cout<<result;
}