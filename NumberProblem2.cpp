#include<iostream>
using namespace std;

int main()
{
	int Arr[4],iCnt=0;
	
	cout<<"Enter elements in array :\n";
	for(iCnt=0;iCnt<4;iCnt++)
	{
		cin>>Arr[iCnt];
	}
	
	cout<<"Elements in array are :\n";
	for(iCnt=0;iCnt<4;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";	
	}
	
	return 0;
}
