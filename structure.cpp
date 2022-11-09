#include <iostream>
using namespace std;

struct student
{
	int roll_no;
	char name[50];
	int age;
	
};

int main()
{
	student s;
	cout<<"Enter Name:";
	cin.getline(s.name,50);
	cout<<"Enter the roll no.:";
	cin>>s.roll_no;
	cout<<"Enter age:";
	cin>>s.age;
	cout<<"***Student data***\n";
	cout<<"Roll no.="<<s.roll_no<<endl;
	cout<<"Name="<<s.name<<endl;
	cout<<"Age="<<s.age;
	return 0;
	
}
