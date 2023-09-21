#include<iostream>
using namespace std;

class cricket
{
	public :
	    int match,trun,average;
		void data()
		{
			cout<<"enter total match"<<endl;
			cin>>match;
			cout<<"enter total run "<<endl;
			cin>>trun;
			cout<<"your average is "<<trun/match<<endl;
			
		}
};
class batsman : public cricket
{
 
};

main()
{

 	 string  name;
 cout<<"enter name "<<endl;
 cin>>name;	
 
 batsman b;
 b.data();
	
}		
		
	
	
		
	
	

