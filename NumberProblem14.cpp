//find given number from array without using flag

#include<iostream>
using namespace std;

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int iSize=0,iCnt=0,iValue=0;
	int *ptr=NULL;
	bool bRet=false;
	
	cout<<"Enter number of elements :"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	cout<<"Enter element to search :"<<"\n";
	cin>>iValue;
	
	bRet=Search(ptr,iSize,iValue);
	
	if(bRet==true)
	{
		cout<<"Element is present in array"<<"\n";
	}
	else
	{
		cout<<"Element is not present in array"<<"\n";
	}
	return 0;
}

