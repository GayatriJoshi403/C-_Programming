//Input : 4
//output : 4  
/*
$ * * * 
* $ * *
* * $ * 
* * * $
*/

#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				cout<<"$"<<"\t";
			}
			else
			{
				cout<<"*"<<"\t";
			}
		}
		cout<<"\n";
	} 
}
int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter number of rows :";
	cin>>iValue1;
	
	cout<<"Enter number of columns :";
	cin>>iValue2;
	
	Display(iValue1,iValue2);
	
	return 0;
}
