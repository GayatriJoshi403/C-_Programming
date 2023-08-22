//summation of array elements

#include<iostream>
using namespace std;

int SummationNumber(int Arr[],int iLength)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum; 
}
int main()
{
	int *ptr=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	cout<<"Enter number of elements :-"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :-"<<"\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	iRet=SummationNumber(ptr,iSize);

	cout<<"Summation is :- "<<iRet<<"\n";
		
	return 0;
}
