
#include<iostream>

using namespace std;

class Base
{
	public:
	
	int x,y;
	
	virtual void fun()
	{
		cout<<"Base fun\n";
	}
	
	void gun()
	{
		cout<<"Base gun\n";
	}
	
	
};
class Derived: public Base
{
	public:
	int i,j;
	
	void sun()
	{
		cout<<"derived sun\n";
	}
	void fun()
	{
		cout<<"derived fun\n";
	}
	
};
int main()
{
	
	Base *bp=new Derived();//upacasting
	bp->fun();
	bp->gun();
	//bp->sun(); //not allowed
	
	cout<<"size of base\n"<<sizeof(Base)<<endl;
	
	cout<<"size of Derived\n"<<sizeof(Derived)<<endl;
	return 0;
}
