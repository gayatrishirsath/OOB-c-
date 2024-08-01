#include <iostream>
using namespace std;
class Area
 {
      public:
    float r, a;

    Area() 
	{
        cout<<"Enter radius = ";
        cin>>r;
        a=3.14*r * r;
        cout << "Area of circle = " << a << endl;
    }
};

int main() 
{
    Area ob;
   
}

