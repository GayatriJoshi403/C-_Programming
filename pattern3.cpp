//Input : 5
//output : 5 4 3 2 1

#include<iostream>
using namespace std;

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		cout<<iCnt<<"\t";
	}
	cout<<"\n";
}
int main()
{
	int iValue=0;
	
	cout<<"Please enter value "<<"\n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}


