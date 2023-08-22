//find minimum number in array
 
#include<iostream>
using namespace std;

int Minimum(int Arr[],int iLength)
{
	int iCnt=0,iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
}
int main()
{
	int *ptr=NULL;
	int iCnt=0,iSize=0,iRet=0;
	
	cout<<"Enter number of elements :-"<<"\n";
	cin>>iSize;
	
	ptr=new int[iSize];
	
	cout<<"Enter elements in array :- \n";
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	iRet=Minimum(ptr,iSize);

	cout<<"Minimum number is :- "<<iRet<<"\n";
		
	return 0;
}
