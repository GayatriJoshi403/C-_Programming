/*
*   *
*   *   *
*   *   *   *
*   *   *   *
*   *   *
*   *
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	if(iRow!=iCol)
	{
		cout<<"Invalid input"<<"\n";
		return;
	}
	for(i=1;i<iRow;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*"<<"\t";
		}
		cout<<"\n";
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=i;j--)
		{
			cout<<"*"<<"\t";
		}
		cout<<"\n";
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter the number of rows : ";
	cin>>iValue1;
	
	cout<<"Enter the numberof columns : ";
	cin>>iValue2;
	
	Display(iValue1,iValue2);
	
	return 0;
}
