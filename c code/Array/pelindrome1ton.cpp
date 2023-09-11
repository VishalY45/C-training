#include<iostream>
using namespace std;
class pelindrome
{
	int no;
	public:
		void setdata(int no)
		{
			this->no=no;
		}
		void show()
		{
			for(int i=1;i<=no;i++)
			{
				int rev=0,j;
				i=j;
				while(j!=0)
				{
					int rem=j%10;
					j=j/10;
					rev=rev*10+rem;
				}
				if(i==rev)
				{
					
					cout<<i;
				}
			}
		}
};
int main()
{
	int no;
	cout<<"Entr a no";
	cin>>no;
	pelindrome p1;
	p1.setdata(no);
	p1.show();
	
}