// Input :  Row 4   Columns    4

//5 4 3 2 1
//5 4 3 2
//5 4 3
//5 4
//5


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
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i<=j)
			{
				cout<<j<<"\t";
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
