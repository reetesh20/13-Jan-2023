//constructors in rectangle
#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
		Rectangle(int x)
		{
			length=x;
			breadth=x;
		}
		Rectangle(int x,int y)
		{
			length=x;
			breadth=y;
		}
		int getarea()
		{
			return length*breadth;
			
		}
			
};
int main()
{
	Rectangle R1;
	Rectangle R2(10);
	Rectangle R3(2,3);
	
	cout<<R1.getarea()<<endl;
	cout<<R2.getarea()<<endl;
	cout<<R3.getarea()<<endl;
	
}
