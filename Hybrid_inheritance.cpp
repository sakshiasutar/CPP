#include <iostream>
using namespace std;

class A
{
	public:
		int a;
		
};

class B:public A
{
	public:
		int b;
};

class C:public A
{
	public:
		int c;
};

class D:public C,public B
{
	public:
		int d;
		
};

int main()
{
	D obj;
	obj.B::a=10;
	obj.C::a=100;
	
	obj.b=20;
	obj.c=30;
	obj.d=40;
	cout<<"\nA from class B:"<<obj.B::a;
	cout<<"\nA from class C:"<<obj.C::a;
	cout<<"\nB:"<<obj.b;
	cout<<"\nC:"<<obj.c;
	cout<<"\nD:"<<obj.d;
	return 0;
}
