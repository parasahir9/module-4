#include <iostream>
using namespace std;
class Person
 {
    string name;
    int age;
public:
    Person(string name, int age)
	 {
        this->name = name;
        this->age = age;
    }
    void display()
	 {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
    class Student : public Person
    {
      
      float percentage;
      public:
     Student(string name, int age, float percentage) : Person(name, age)
	  {
        this->percentage = percentage;
    }
    void display()
	 {
        Person::display();
        cout << "Percentage: " << percentage << endl;
    }
};
     class Teacher : public Person
     {
      private:
      int salary;
      public:
      Teacher(string name, int age, int salary) : Person(name, age)
	   {
        this->salary = salary;
    }
    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
    }
};
  int main() 
 {
    Student s("paras", 21, 72);
    Teacher t("varsha", 28, 40000);
    s.display();
    t.display();
    
}
