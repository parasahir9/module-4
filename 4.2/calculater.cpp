#include<iostream>
using namespace std;

class calc
{
	public:
		 float a,b;
		 void add()
		 {
		 	cout<<"enter a value "<<endl;
		 	cin>>a;
		 	cout<<"enter a value"<<endl;
		 	cin>>b;
		 	cout<<"total is : "<<a+b<<endl;
		 	
	    }
		 void sub()
		 {
		 	cout<<"enter a value "<<endl;
		 	cin>>a;
		 	cout<<"enter a value"<<endl;
		 	cin>>b;
		 	cout<<"total is : "<<a-b<<endl;
		 	
        }
		 void multi()
		 {
		 	cout<<"enter a value "<<endl;
		 	cin>>a;
		 	cout<<"enter a value"<<endl;
		 	cin>>b;
		 	cout<<"total is : "<<a*b<<endl;
		 	
	    }
		 void div()
		 {
		 	cout<<"enter a value "<<endl;
		 	cin>>a;
		 	cout<<"enter a value"<<endl;
		 	cin>>b;
	 	    cout<<"total is : "<<a/b<<endl;
		 }
};
  main()
{
	calc c;
	c.add();
	c.sub();
	c.multi();
    c.div();
    
    
}

		 
		 
		 
	
	
	

