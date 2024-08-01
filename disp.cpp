using namespace std;
#include<iostream>
class Distance 
{
	public:
	 int feet,inch;
	 void accpet(int feet1,int inch1)
	 {
	 	feet=feet1;
	 	inch=inch1;
	 }
	 void disp()
	 {
	 	cout<<"Distance ="<<feet<<"\nfoot"<<inch;
	 	
	 }
};
int main()
{
	Distance ob;
	int f,i;
	cout<<"Enter feet and inches=";
	cin>>f>>i;
	ob.accpet(f,i);
	ob.disp();
}

