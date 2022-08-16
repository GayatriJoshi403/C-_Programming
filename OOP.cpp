#include<iostream>
using namespace std;

class Arithmetic //class
{
  public:
  //characteristics
  int iNo1;
  int iNo2;
  //behaviour
  
  Arithmetic()//constructor
  {
  	cout<<"Inside default constructor\n";
  	iNo1=0;
  	iNo2=0;
  }
  
  Arithmetic(int A,int B)//constructor
  {
  	cout<<"Inside parameterize constructor\n";
  	iNo1=A;
  	iNo2=B;
  }
  
  
  ~Arithmetic()//destructor
  {
  	cout<<"Inside destructor\n";
  }
  
  
  int Addition()
  {
    int iAns=0;
    iAns=iNo1+iNo2;
    return iAns;
  }
  
  int Substraction()
  {
    int iAns=0;
    iAns=iNo1-iNo2;
    return iAns;
  }	
};

int main()
{	
	
	int iValue1=0, iValue2=0, iRet=0;
		
		
	cout<<"Enter first number :\n";
	cin>>iValue1;
	
	cout<<"Enter second number :\n";
	cin>>iValue2;

	Arithmetic obj1;		
	Arithmetic obj2(iValue1,iValue2);		

	iRet=obj2.Addition();
	cout<<"Addition="<<iRet<<"\n";
	
	iRet=obj2.Substraction();
	cout<<"Substraction="<<iRet<<"\n";
	
	return 0;
}
