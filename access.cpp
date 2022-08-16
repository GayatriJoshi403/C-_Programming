#include<iostream>

using namespace std;

class Demo
{
	int i;
	
	public :
	int x;
	
	private :
	int y;
	
	public:
	Demo()
	{
		x=10;
		y=20;
		i=30;
	}
	
	void fun()
	{
		cout<<"Inside public fun\n";
		cout<<y<<"\n";//allowed
		gun();
	}
	
	private:
	void gun()
	{
		cout<<"Inside private fun\n";
		cout<<y<<"\n";
	}
	
};

int main()
{
	Demo obj;
	
	cout<<obj.x<<"\n";
	
	//cout<<obj.y<<"\n";//NA
	
	//cout<<obj.i<<"\n";//NA
	
	obj.fun();
//	obj.gun();NA
			
	return 0;
	
}
