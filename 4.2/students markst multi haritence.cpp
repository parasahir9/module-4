#include <iostream>
using namespace std;
class Students 
{
    int roll_number;
     public:
    Students(int roll_number)
    {
	
        cout << "Roll Number: " << roll_number << endl;
    }
};
 class Test : public Students
    {
   
    int marks1, marks2;
     public:
    Test(int roll_number, int marks1, int marks2) : Students(roll_number)
	 {

        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
    }
};
 class Result : public Test
    {

    int total_marks;
    public:
    Result(int roll_number, int marks1, int marks2) : Test(roll_number, marks1, marks2) 
	{
        total_marks = marks1 + marks2;
    
        cout << "Total Marks: " << total_marks << endl;
    }
};
int main() {
    Result r(2, 80, 92);
}
