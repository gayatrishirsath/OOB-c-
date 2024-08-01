using namespace std;
#include<iostream>
class Student
{
	public:
	 int rno;
	 char name[20];
	 float per;
	  void accept()
	  {
	  	cout<<"\n Enter rollno name per=";
	  	cin>>rno>>name>>per;
	  }
	  void disp()
	  {
	  	cout<<"\nRoll no="<<rno;
	  	cout<<"\nName="<<name;
	  	cout<<"\nper="<<per;
	  }	  	 
};
int main()
{
	Student ob;
	ob.accept();
    ob.disp();	
}
