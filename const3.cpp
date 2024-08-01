#include <iostream>
using namespace std;
class Stud
 {
      public:
    int rno,s1,s2,s3,s4,s5,s6;
    char sname[20];
    Stud() 
	{
        cout<<"Enter Rollno=";
        cin>>rno;
        cout<<"Enter 6 subject marks=";
        cin>>s1>>s2>>s3>>s4>>s5>>s6;
        cout<<"Enter student name=";
        cin>>sname;      
    }
    void cal()
    {
    	int t;
    	t=s1+s2+s3+s4+s5+s6;
    	cout<<"Total marks="<<t<<endl;
	}
	void disp()
	{
		cout<<"Rollno="<<rno<<endl;
		cout<<"Student name="<<sname<<endl;

	}
};

int main() 
{
    Stud ob;
    ob.cal();
    ob.disp();
}

