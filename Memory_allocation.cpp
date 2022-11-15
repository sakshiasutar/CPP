#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\nEnter total number of students:";
    cin>>num;
    
    float* ptr;
    
    ptr=new float[num];
    cout<<"\nEnter CGPA of Students:";
    
    for(int i=0;i<num;++i)
    {
        cout<<"\nStudents"<< i+1<<":";
        cin>>*(ptr+i);
        
    }
    cout<<"\nCGPA of students are";
    
    for (int i=0;i<num;++i)
    {
        cout<<"\nStudents"<< i+1<<":"<<*(ptr+i)<<endl;
        
    }
    delete [] ptr;
    return 0;
}
