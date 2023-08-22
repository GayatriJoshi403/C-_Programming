//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1


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
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{	
				if(j%2==0)
				{
					cout<<"0"<<"\t";
				}
				else
				{
					cout<<"1"<<"\t";	
				}
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
