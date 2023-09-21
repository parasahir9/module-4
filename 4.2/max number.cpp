#include <iostream>
using namespace std;
class MaxNumber
{

    int num1;
    int num2;
public:
    MaxNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    friend int findMax(MaxNumber &m);
    void display()
    {
        cout << "The maximum number is: " << findMax(*this) << endl;
    }
};
int findMax(MaxNumber &m)
{
    return (m.num1 > m.num2) ? m.num1 : m.num2;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    MaxNumber m(a, b);
    m.display();
    return 0;
}
