#include<iostream>
using namespace std;

void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	cout<<"Elements in array are :-"<<"\n";
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0;
	
	cout<<"Enter number of elements : "<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :-"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	Display(ptr,iSize);
	
	return 0;
}

