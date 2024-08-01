using namespace std;
#include<iostream>
class Add
{
	public:
		int a,b,c;
	Add()
	{
		cout<<"Enter two numbers=";
		cin>>a>>b;
		 c=a+b;
		 cout<<"addition="<<c<<endl;
	}
};
int main()
{
	Add ob;
}
