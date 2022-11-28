/* multiple inheritance */
#include<iostream>
using namespace std;
class A{
	public :
		void funca()
		{
			cout<<" func a\n:";
			
		}
		
		
};

class B {
   public :
		void funcb()
		{
			cout<<" func b\n:";
			
		}
		
};
class C :public A, public B{
	public:
		
};

int main()
{
  C c;
  c.funca();
  c.funcb();
}
