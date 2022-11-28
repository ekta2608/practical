#include<iostream>
using namespace std;

class number          //Base Class
{
       public:
                int num1, num2;
        public:
                void add1()
                {
                        cout<<"\n Enter First Number : ";
                        cin>>num1;
                        cout<<"\n Enter Second Number : ";
                        cin>>num2;
                }
};
class Addition: public number   //Class Addition – Derived Class
{
                int sum,sub;
        public:
                void add()
                {
                        sum = num1 + num2;
                        sub=num1 - num2;
                }
               
               void display()
               {
               	cout<<"\nAddition of two numbers:"<<sum;
               	cout<<"\nsubtraction of two numbers:"<<sub;
			   }
};
int main()
{
        Addition a;
        a.add1();
        a.add();
        a.display();
}
