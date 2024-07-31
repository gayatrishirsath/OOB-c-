using namespace std;
#include<iostream>
class Demo
{
	public:
	void add(int a,int b)
		{
			int c=a+b;
			cout<<"\nAddition="<<c;
		}
	void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"\nAddition="<<d;
		}
	void add(float a,float b)
		{
			float c=a+b;
			cout<<"\nAddition="<<c;
		}
};
int main()
{
	Demo ob;
	ob.add(11,56);
    ob.add(11,56,90);
	ob.add(11.56f,89.9f);
}
