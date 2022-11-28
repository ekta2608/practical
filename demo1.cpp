#include<iostream>
using namespace std;

class A{
	
	public:     //base class
		void func()
		{
			cout<<"inheritance";
			
		}
};
class B:public A{
	
	
};

int main()
{
	B b;
	b.func();
	
}
