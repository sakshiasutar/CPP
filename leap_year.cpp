#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter a Number:";
    cin>>no;
    if (no%4==0)
    {
        cout<<"It is a leap year";
    }
    else
    {
        cout<<"It is not a leap year";
    }
    return 0;
}
