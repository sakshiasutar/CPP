#include <iostream>
#include <fstream>
using namespace std;

class person
{

public:
    char name[30];
    int age;
    char gender[10];

public:
    void getdata();
    void putdata();

};

void person::getdata()
{
    cout<<"Name:";
    cin>>name;
    cout<<"Age:";
    cin>>age;
    cout<<"Gender:";
    cin>>gender;
}

void person::putdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<gender<<endl;
}

int main()
{
    person human[100];
    fstream file;
    int i,n;
    file.open("Sakshi.txt",ios::binary|ios::app|ios::out);
    cout<<"How many data of persons you want to insert?:";
    cin>>n;
    cout<<"Enter the information of a person(name,age,gender):";
    for(i=0;i<n;i++)
    {
        human[i].getdata();
        file.write((char *)&human[i],sizeof(human[i]));
    }
    file.close();
    file.open("Sakshi.txt",ios::in);
    cout<<"\nInformation of person is as follows:";
    for(i=0;i<n;i++)
    {
        file.read((char *)&human[i],sizeof(human[i]));
        human[i].putdata();
    }
    file.close();
    return 0;
}
