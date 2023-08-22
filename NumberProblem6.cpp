#include<iostream>
using namespace std;

int main()
{
	int iSize=0,iCnt=0;
	int *Arr=NULL;
	
	cout<<"Enter the number of elemnets "<<"\n";
	cin>>iSize;
	
	Arr=new int[iSize];
	
	cout<<"Enter element in array- "<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>Arr[iCnt];
	}
	cout<<"Elements in array are-"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
	
	return 0;
}
