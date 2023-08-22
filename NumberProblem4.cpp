#include<iostream>
using namespace std;

void Display(int ptr[])
{
	int iCnt=0;
	
	cout<<"Elements in array are :\n";
	for(iCnt=0;iCnt<5;iCnt++)
	{
		cout<<*(ptr+iCnt)<<"\n";
	}
}
int main()
{
	int Arr[5],iCnt=0;
	
	cout<<"Enter elements in array: \n";
	for(iCnt=0;iCnt<5;iCnt++)
	{
		cin>>Arr[iCnt];
	}
	Display(Arr); //Display(100)-call by address
	
	return 0;
}
