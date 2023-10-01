/*A class name spring which has data member month and year and member function named show_date().
The class has a parameterized constructor. It also has a destructor.
Implement the class by creating two objects. */
#include <iostream>

class Spring {
private:
    int month;
    int year;

public:
    Spring(int m, int y) {
        month = m;
        year = y;
    }

    void show_date() {
        std::cout << "Month: " << month << ", Year: " << year << std::endl;
    }

    ~Spring() {
        std::cout << "Destructor called for Month: " << month << ", Year: " << year << std::endl;
    }
};

int main() {
    Spring object1(3, 2023);  // Creating the first object
    Spring object2(5, 2024);  // Creating the second object

    std::cout << "Object 1:" << std::endl;
    object1.show_date();

    std::cout << "Object 2:" << std::endl;
    object2.show_date();

    return 0;
}
