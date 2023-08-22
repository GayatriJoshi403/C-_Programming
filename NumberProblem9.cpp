//Cout even number

#include<iostream>
using namespace std;

int CountEven(int Arr[],int iLength)
{
	int iCnt=0,iEvenCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenCnt++;
		}
	}
	return iEvenCnt;
}
int main()
{
	int *ptr=NULL;
	int iSize=0,iCnt=0,iRet=0;
	 
	cout<<"Enter number of elements :-"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :-";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	iRet=CountEven(ptr,iSize);

	cout<<"Number of even elements are :- "<<iRet<<"\n";
	
	return 0;
		
}
