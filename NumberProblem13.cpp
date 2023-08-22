//find frequency of given number in array

#include<iostream>
using namespace std;

int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iFrequency=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
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
	cout<<"Enter number to count frequency :"<<"\n";
	cin>>iValue;
	
	iRet=Frequency(ptr,iSize,iValue);
		
	cout<<"Frequency of number is :"<<iRet<<"\n";
	
	return 0;
}
