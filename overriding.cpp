#include<iostream>
using namespace std;

class sample{
	public:
	 void student(){
	 	cout << "kartika"<<endl;
	 }
};
class sample1 : public sample{
	public:
		void sample(){
			cout<<"krutika"<<endl;
		}
};

int main(){
	sample1 b;
	b.student();
	b.sample();
}
