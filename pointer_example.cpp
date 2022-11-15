#include <iostream>
using namespace std;

int main()
{
    int var;
    int* ptr;
    int val;
    
    var=2000;
    ptr=&var;
    val=*ptr;
    cout<<"Value of variable:"<<var<<endl;
    cout<<"Value of ptr:"<<ptr<<endl;
    cout<<"Value of val using pointer:"<<val<<endl;
    return 0;
}
