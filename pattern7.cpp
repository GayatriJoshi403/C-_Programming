//Input : 5
//output : 1 * 3 * 5 *  

#include<iostream>
using namespace std;

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt%2==0)
		{
			cout<<"*"<<"\t";
		}
		else
		{
			cout<<iCnt<<"\t";
		}
	
	}
	cout<<"\n";
	
}
int main()
{
	int iValue;
	
	cout<<"Enter the value :";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}
