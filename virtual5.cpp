
#include<iostream>

using namespace std;

class Base
{
	public:
	
	int x,y;
	
	virtual void fun()//1000
	{
		cout<<"Base fun\n";
	}
	
	virtual void gun()//2000
	{
		cout<<"Base gun\n";
	}
	void sun()//3000
	{
	cout<<"Base sun\n";	
	}
	virtual void run()//4000
	{
	cout<<"Base run\n";	
	}
	
};
class Derived: public Base
{
	public:
	int i,j;
	
	void fun()//5000
	{
		cout<<"derived fun\n";
	}
	virtual void gun()//6000
	{
		cout<<"derived gun\n";
	}
	void sun()//7000
	{
		cout<<"derived sun\n";
	}
	
	virtual void mun()//8000
	{
		cout<<"derived mun\n";
	}
	
	
};
int main()
{
	
	Base *bp=new Derived();//upacasting
	bp->fun();//derived
	bp->gun();
	bp->run();
	bp->sun();
	//bp->mun(); //not allowed
	return 0;
}
