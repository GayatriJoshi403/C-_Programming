// Input :  Row 4   Columns    4
/*

A
B   B
C   C   C
D   D   D   D

a
b b
c c c
d d d d
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='a';
	
	if(iRow!=iCol)
	{
		cout<<"Invalid input"<<"\n";
		return;
	}
	for(i=1,ch='a';i<=iRow;i++,ch++)
	{
		/*for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				cout<<ch<<"\t";
			}
		}*/
		for(j=1;j<=i;j++)
		{
			cout<<ch<<"\t";
		}
		cout<<"\n";
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter number of rows : ";
	cin>>iValue1;
	
	cout<<"Enter number of column : ";
	cin>>iValue2;
	
	Display(iValue1,iValue2);
	
	return 0;
}
