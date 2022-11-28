#include<iostream>
using namespace std;

class A{
	public:
		void studenta()
		{
			cout<<"welcome";
		}
};

class B:public A{
	public:
		void studentb()
		{
			cout<<"to c++";
		
		}
	
};
class C: public B{
	public:
};

 int main()
{
	
C c;
c.studenta();
c.studentb();
}
