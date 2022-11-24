#include <iostream>
#include <fstream>
using namespace std;

class person
{
    public:
    char name[30];
    int age;
    char gender[30];

    public:
        void getdata();

        void putdata();

};

void person::getdata()
{
    cin>>name;
    cin>>age;
    cin>>gender;
}

void person::putdata()
{
    cout<<"Name of the person:"<<name<<endl;
    cout<<"Age of the person:"<<age<<endl;
    cout<<"Gender of the person:"<<gender<<endl;
}

int main()
{
    person human[100];
    fstream file;
    int i,n;
    file.open("sakshi.txt",ios::binary|ios::app|ios::out);
    cout<<"\nHow many data of person you want to insert?:";
    cin>>n;
    cout<<"Enter the information of the person(name,age,gender)";
    for (i=0;i<n;i++)
    {
        human[i].getdata();
        file.write((char *)&human[i],sizeof(human[i]));
    }
    file.close();
    file.open("sakshi.txt",ios::in);
    cout<<"\nInformation of persom is as follows:";
     for (i=0;i<n;i++)
    {
        file.read((char *)&human[i],sizeof(human[i]));
        human[i].putdata();
    }
    file.close();
    return 0;

}
