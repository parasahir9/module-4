#include<iostream>
using namespace std;

class calc1
{
	public:
		
		void add (int a,int b)
		{
			cout<<"a+b =  "<<a+b<<endl;
		}
		void sub (int a,int b)
		{
			cout<<"a-b =  "<<a-b<<endl;
		}
		
			void multi (int a,int b)
		{
			cout<<"a*b =  "<<a*b<<endl;
		}
		
			void div (float a,float b)
		{
			cout<<"a/b =  "<<a/b<<endl;
		}
	
	
};
main()
{

calc1 c;
c.add(21,12);
c.sub(45,23);
c.multi(12,13);
c.div(233,15);
}
