#include<iostream>

using namespace std;

int main()
{
	int Arr[10];
	int *p=NULL;
	
	//p=(int *)malloc(size(int)*10); in c
	
	p=new int[10];
	if(p==NULL)
	{
		cout<<"Unable to allocate memory\n";
	}	
	else
	{
		cout<<"memory successfully allocated :"<<p<<"\n";
	}
	
	//free(p); in c
	delete []p;//array delete
	
	return 0;
}
