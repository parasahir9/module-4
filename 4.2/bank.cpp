#include<iostream>
using namespace std;

class bank
{
	int accno;
	string name,acctype;
	float bal;
	
	public:
		
		
		bank(int accno, string name,string acctype, float bal);
		
		void withdraw();
		void deposite();
		void display();
		
};
		void bank::deposite() 
		{
			int damt1;
			cout<<"enter deposite amt="<<endl;
			cin>>damt1;
			bal+=damt1;
		}
		
		void bank::withdraw()
		{
			int wamt1;
			cout<<"enter withdraw amt="<<endl;
			cin>>wamt1;
			if(wamt1>bal)
				cout<<"cannot withdraw amount"<<endl;
			bal-=wamt1;
		   
		}
		
		void bank::display()
		{
			
	    	cout<<"accno : "<<accno<<endl;
	    	cout<<"name : "<<name<<endl;
  	    	cout<<"acctype : "<<acctype<<endl;
	    	cout<<"bal : "<<bal<<endl;



		}

main()
{
	
	int accno;
	string name,acctype;
	float bal=0;
	
	        cout<<"enter your name"<<endl;
			fflush(stdin);
			getline(cin,name);
			cout<<"entar your accno"<<endl;
			cin>>accno;
	    	cout<<"entar your bal"<<endl;
	    	cin>>bal;
	    	cout<<"entar your acctype"<<endl;
	    	cin>>acctype;


 bank b(accno,name,acctype,bal);
 b.deposite();
 b.withdraw();
 b.display();
	
	
	
}
