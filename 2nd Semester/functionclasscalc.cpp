#include <iostream>
using namespace std;

class oper {
public:
    int a;
    int b;
    int choice;
    int add(int x, int y) {
        return x + y;
    }
    int subtract(int x, int y) {
        return x - y;
    }
    int multiply(int x, int y) {
        return x * y;
    }
    int divide(int x, int y) {
        return x / y;
    }
    int modulus(int x, int y) {
        return x % y;
    }
    void operations() {
        std::cout << "Enter the two numbers: " << endl;
        cin >> a;
        cin >> b;
        cout << "Enter the operand (1: add, 2: subtract, 3: multiply, 4: divide, 5: modulus): ";
        cin >> choice;
    }
    void output() {
        int result;
        switch (choice) {
            case 1:
                result = add(a, b);
                break;
            case 2:
                result = subtract(a, b);
                break;
            case 3:
                result = multiply(a, b);
                break;
            case 4:
                result = divide(a, b);
                break;
            case 5:
                result = modulus(a, b);
                break;
            default:
                result = -2; // Indicate invalid input
                break;
        }
        if (result == -2) {
            cout << "Invalid input" << endl;
        } else {
            cout << "The result is: " << result << endl;
        }
    }
};

int main() {
    oper obj1;
    obj1.operations();
    obj1.output();
    return 0;
}

