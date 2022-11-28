/* constuctor : It is special method which has same name as class name

 :no return types.
 :use to initialized the values.
 
 note: Automatically called when the object is created.
 
 */
 
 #include<iostream>
 using namespace std;
 
 class sample{
 	
 	public:
 		
 		sample()
 		{
 			cout<<"\tDefault constructor called:";
 			
		 }
	
 };
 
 class sample1
 
 {
 	public:
 		sample1()
 		
 		{
 			cout<<"\nhello constructor:";
		 }
 };
 
 int main()
 {
 	sample s,s3;
 	sample1 s1;
 	return 0;
 }
