/Q2
//class programming
#include<iostream>
using namespace std;
class Programming
{
	public:
		Programming(char arr[])
		{
			cout<<"I love "<<arr<<endl;
		}
		Programming()
		{
			cout<<"I love programming"<<endl;
		}
};
int main()
{
	char str[10];
	cout<<"enter string to be printed\n";
	cin>>str;
	Programming P1;
	Programming P2(str);
}
