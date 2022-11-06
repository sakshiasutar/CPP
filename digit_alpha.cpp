#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    
    if (ch>='0'&&ch<='9')
    {
        cout<<"It is a digit";
    }
    else if (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        cout<<"It is Alphabet";
    }
    else
    {
        cout<<"It is not a digit nor an alphabet";
    }
    return 0;
}
