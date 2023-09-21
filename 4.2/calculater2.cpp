#include<iostream>
using namespace std;

class Calculator {
public:
	 double num1;
     double num2;
   
    Calculator(double x, double y) {
        num1 = x;
        num2 = y;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "invalid choice" <<endl;
            return 0.0;
        }
    }
	 
    double multiply() {
        return num1 * num2;
    }
};

int main() {
    double x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Calculator calc(x, y);

    cout << "Addition: " << calc.add() <<endl;
    cout << "Subtraction: " << calc.subtract() <<endl;
    cout << "Multiplication: " << calc.multiply() <<endl;
    cout << "Division: " << calc.divide() <<endl;

    return 0;
}

