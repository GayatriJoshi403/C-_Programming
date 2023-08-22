//search first occurrence of number in array
using namespace std;

#include<iostream>

int SearchFirstOccurence(int Arr[],int iLength,int iNo)
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
		return -1;
	}
	else
	{
		return iCnt;
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0,iValue=0,iRet=0;
	
	cout<<"Enter number of elements in array :"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	cout<<"Enter element to search :"<<"\n";
	cin>>iValue;
	
	iRet=SearchFirstOccurence(ptr,iSize,iValue);
	
	if(iRet==-1)
	{
		cout<<"There is no such element in array :"<<"\n";
	}	
	else
	{
		cout<<"Element is occured at : "<<iRet<<"\n";
	}
	
	return 0;
}
