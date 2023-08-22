//    * 
//  * * * 
// * * * *
//* * * * *



#include<iostream>
using namespace std;

void Display(int iRow,int iCol)
{
	int i=0,j=0,k=0;
	
	if(iRow!=iCol)
	{
		cout<<"Invalid input"<<"\n";
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			cout<<" "<<"\t";	
		}
		for(k=1;k<i;k++)
		{
 			cout<<"* "<<"\t";
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
