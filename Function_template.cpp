#include <iostream>
using namespace std;
template<class T>
void sort(T A[],int n)
{
    int pos_min,i;
    T temp;
    for(i=0;i<n-1;i++)
    {
    pos_min=i;
    for(int j=i+1;j<n;j++)
    {
        if(A[j]<A[pos_min])
        pos_min=j;
    }
    if (pos_min!=i)
    {
        temp=A[i];
        A[i]=A[pos_min];
        A[pos_min]=temp;
    }
}
cout<<"\nSorted elements are:\n";
for (i=0;i<n;i++)
cout<<"\t"<<A[i];
}

int main()
{
    int n,i,ch;
    int A[10];
    float B[10];
    do
    {
        cout<<"\nSelection sort using function template";
        cout<<"\n1.Sort Interger Numbers";
        cout<<"\n2.Sort Float Numbers";
        cout<<"\n3.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
            cout<<"\nSorting integer numbers";
            cout<<"\nEnter how many number wanted to sort";
            cin>>n;
            for (i=0;i<n;i++)
            cin>>A[i];
            sort<int>(A,n);
            break;
            case 2:
            cout<<"\nSorting floating point numbers";
            cout<<"\nEnter how many number wanted to sort";
            cin>>n;
            for(i=0;i<n;i++)
            cin>>B[i];
            sort<float>(B,n);
            break;
            case 3:
            exit(0);
        }
        
     }while (ch!=3);
     return 0;
    
}
