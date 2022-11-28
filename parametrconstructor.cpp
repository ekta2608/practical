#include<iostream>
using namespace std;


class sample{
	
	public:
		
		sample(string Fname,string Lname)
		{
			cout<<"parameterized constructor called:";
		     	cout<<"\nFname:"<<Fname;
			cout<<"\nLname:"<<Lname;
			
			
		}
		void show()
 
            {
	          cout<<"\nshow from A:";
            }
};
 
int main()
{
	sample s("ekta","kathad");
	s.show();
	return 0;
}
