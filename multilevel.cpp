/* multi level inheritance */
#include<iostream>
using namespace std;

class A{
	public:
		void Afunc()
		{
			cout<<"fun A\n";
		}
};
class B : public A
{
	public:
		void Bfunc()
		{
			cout<<"fun B\n";
		}
};

class C:public B{
	public:
		
};

int main()
{
	C c;
	c.Afunc();
	c.Bfunc();
}
