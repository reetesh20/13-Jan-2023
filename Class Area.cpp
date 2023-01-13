//Q3
//class area

#include <iostream>
using namespace std;
class Area
{
public:
    void area(int l, int b)
    {
        cout<<"Area of Rectangle is = "<<l*b<<endl;
    }

    void area(int a)
    {
        cout<<"Area of Square is = "<<a*a<< endl;
    }
};

int main()
{
    Area obj;
    obj.area(2,3);
    obj.area(3);
}
