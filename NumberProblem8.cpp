//Display Even numbers from array

#include<iostream>
using namespace std;

void DisplayEven(int Arr[],int iLength)
{
	int iCnt=0;
	
	cout<<"Even number from array are :"<<"\n";
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			cout<<Arr[iCnt]<<"\n";
		}
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0;
	
	cout<<"Enter number of elements :-"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :-"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	DisplayEven(ptr,iSize);
	
	return 0;
}
