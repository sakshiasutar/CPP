#include <iostream>
using namespace std;
class baseclass
{
public:
    void disp()
    {
        cout<<"Function of Parent Class";
    }
};

class derivedclass:public baseclass
{
public:
    void disp()
    {
        cout<<"Function of child class";
    }
};

int main()
{
    derivedclass obj;
    obj.disp();
    return 0;
}
