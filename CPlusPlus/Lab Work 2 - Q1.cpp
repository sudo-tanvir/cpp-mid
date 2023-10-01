/*Write a program that will add two private members of a class  using a friend function named add().
The class has two objects. A constructor with a single parameter to set the value.*/
#include <iostream>

class MyClass {
private:
    int num1;
    int num2;

public:
    MyClass(int value) {
        num1 = value;
        num2 = value;
    }

    friend int add(const MyClass& obj1, const MyClass& obj2);
};

int add(const MyClass& obj1, const MyClass& obj2) {
    return obj1.num1 + obj2.num2;
}

int main() {
    int value;

    std::cout << "Enter a value: ";
    std::cin >> value;

    MyClass obj1(value);
    MyClass obj2(value);

    int sum = add(obj1, obj2);

    std::cout << "Sum of private members: " << sum << std::endl;

    return 0;
}
