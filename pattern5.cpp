//Input : 4
//output : 1 2 3 4 4 3 2 1

#include<iostream>
using namespace std;
 
void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		cout<<iCnt<<"\t";
	}	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		cout<<iCnt<<"\t";
	}
	cout<<"\n";
}
int main()
{
	int iValue=0;
	
	cout<<"Enter value : "<<"\n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}
