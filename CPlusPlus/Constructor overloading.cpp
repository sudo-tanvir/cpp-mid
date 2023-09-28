//constructor OverLoading......................................................................

#include<iostream>
using namespace std;

class MaxCalculator {
public:
    MaxCalculator(int a, int b) {
        result = a + b;
    }

    MaxCalculator(float a, float b) {
        result = a - b;
    }

    void displayResult() {
        cout <<result << endl;
    }

private:
    float result;
};

int main() {
    int ix1, ix2;
    float fx1, fx2;

    cout << "Enter Integer number 1: ";
    cin >> ix1;
    cout << "Enter Integer number 2: ";
    cin >> ix2;
    cout << "Enter Float number 1: ";
    cin >> fx1;
    cout << "Enter Float number 2: ";
    cin >> fx2;

    MaxCalculator intCalculator(ix1, ix2);
    MaxCalculator floatCalculator(fx1, fx2);

    cout << "Integer Calculation: ";
    intCalculator.displayResult();

    cout << "Float Calculation: ";
    floatCalculator.displayResult();

    return 0;
}



