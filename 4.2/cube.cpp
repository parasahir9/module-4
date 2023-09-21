#include<iostream>
using namespace std;


class line
{
   public:
             inline float mul(float x,float y)
              {
                            return(x*y);
              }
             inline  float cube(float x)
              {
                            return(x*x*x);
              }
};

int main()
{
              line obj;
              float val1,val2;

              cout<<"Enter 1st value :: ";
              cin>>val1;
              cout<<"Enter 2nd value :: ";
              cin>>val2;
              cout<<"Multiplication value is :: "<<obj.mul(val1,val2)<<endl;
              cout<<" 1st Cube value is [ " <<obj.cube(val1)<<" ] 2nd cube value is :: ["<<obj.cube(val2)<<" ]"<<endl;

              return 0;
}
