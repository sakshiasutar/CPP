#include <iostream>
using namespace std;

class A
{
	public:
		int a;
		
};

class B:virtual public A
{
	public:
		int b;
};

class C:virtual public A
{
	public:
		int c;
};

class D:public B,public C
{
	public:
		int d;
		
};

int main()
{
	D obj;
	obj.a=100;
	obj.b=20;
	obj.c=30;
	obj.d=40;
	cout<<"\nA:"<<obj.a;
	cout<<"\nB:"<<obj.b;
	cout<<"\nC:"<<obj.c;
	cout<<"\nD:"<<obj.d;
	return 0;
}
