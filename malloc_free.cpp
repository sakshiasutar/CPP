#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n,i,*ptr,sum=0;
	
	cout<<"How many element:";
	cin>>n;
	
	ptr=(int*)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		cout<<"Error in the allocation memory";
		exit(0);
	}
	
	cout<<"Enter elements :";
	for (i=0;i<n;++i)
	{
		cin>>*(ptr+1);
		sum+=*(ptr+1);
	}
	
	cout<<"Sum of elements :"<<sum;
	free(ptr);
	return 0;
}
