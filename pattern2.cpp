//Input : 5
//output : 1 2 3 4 5

#include<iostream>
using namespace std;

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		cout<<iCnt<<"\t";
	}
	cout<<"\n";
}
int main()
{
	int iValue=0;
	
	cout<<"Please enter value :"<<"\n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}
