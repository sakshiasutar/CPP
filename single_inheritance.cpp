#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"Constructor of A class"<<endl;
		}
};

class B:public A
{
	public:
		B()
		{
			cout<<"Construction of B class";
		}
};

int main()
{
	B obj;
	return 0;
}
