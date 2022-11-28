#include <iostream>

using namespace std;


/*
	Pure virtual function: This functions are just declared.
						   -They do not have body.
						   -this function are compulsory implemented in those
						    class which are inheriting them.
						   
						   
						1) Pure Virtual function :
						
							virtual void func();   
						   
						   
						2) Non-virtual function.
						
						   e.g void func()
						   	   {
						   	   		
						       }
*/
class Sample{
	public:
		void f1()
		{
			cout<<"\nNon-pure virtual function.";
		}		
		virtual void f2();  // Pure Virtual function.
};

class Demo : public Sample{
	public:
		void f2()
		{
			cout<<"Virtual implemented in Derived";
		}
};


int main()
{
	Demo s;
	s.f1();
	s.f2();
	return 0;
}
