#include<iostream>
using namespace std;

void Display(int Arr[])
{
	int iCnt=0;
	cout<<"Elements in array are :\n";
	for(iCnt=0;iCnt<5;iCnt++)
	{
		cout<<Arr[iCnt]<<"\n";
	}
}
int main()
{
	int Brr[5],iCnt=0;
	
	cout<<"Enter elements in array :\n";
	for(iCnt=0;iCnt<5;iCnt++)
	{
		cin>>Brr[iCnt];
	}
	Display(Brr);
	
	return 0;
}

//Arr[3]
//*(Arr+3)     
//*(3+Arr)
//3[Arr]


