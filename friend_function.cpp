#include <iostream>
using namespace std;

class Complex
{
	int a,b;
	public:
		void setnumber(int n1,int n2)
		{
			a=n1;
			b=n2;
			
		}
		friend Complex sumComplex(Complex o1,Complex o2);
		void printnumber()
		{
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex sumComplex(Complex o1,Complex o2)
{
	Complex o3;
	o3.setnumber((o1.a + o2.a),(o1.b + o2.b));
	return o3;
}
int main()
{
	Complex c1,c2,sum;
	c1.setnumber(1,4);
	c2.setnumber(5,8);
	c1.printnumber();
	c2.printnumber();
	sum=sumComplex(c1,c2);
	sum.printnumber();
	
	return 0;
	
}
