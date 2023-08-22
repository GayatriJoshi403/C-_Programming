//find maximum number in array
 
#include<iostream>
using namespace std;

int Maximum(int Arr[],int iLength)
{
	int iCnt=0,iMax=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}
int main()
{
	int *ptr=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	cout<<"Enter number of elements :-\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :-\n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	iRet=Maximum(ptr,iSize);
	
	cout<<"Maximum number is :- "<<iRet<<"\n";
	
	return 0;
}
