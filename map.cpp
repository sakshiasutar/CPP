#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string name;
    int pop;

    string states[]={"Maharashtra","Punjab","Kerala"};
    int pops[]={123456789,21345679,12344667};

    map<string,int,less<string> >mapStates;
    map<string,int,less<string> >::iterator iter;

    for(int j=0;j<3;j++)
    {
        name=states[j];
        pop=pops[j];
        mapStates[name]=pop;

    }

    cout<<"Enter state:";
    cin>>name;
    pop=mapStates[name];
    cout<<"Population:"<<pop<<"\n";
    cout<<endl;
       for(iter = mapStates.begin(); iter != mapStates.end(); iter++)
      cout << (*iter).first << ' ' << (*iter).second << ",\n";
   return 0;
}
