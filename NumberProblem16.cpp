//search last occurrence of number in array

#include<iostream>
using namespace std;

int SearchLastOccurence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
}
int main()
{
	int iSize=0,iCnt=0,iValue=0,iRet=0;
	int *ptr=NULL;
	
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
	
	iRet=SearchLastOccurence(ptr,iSize,iValue);

	if(iRet==-1)
	{
		cout<<"There is no such element in array" <<"\n";
	}	
	else
	{
		cout<<"Element is occur at :"<<iRet<<"\n";
	}
	return 0;
}
