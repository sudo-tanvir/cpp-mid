/*Lab work: Create a class named Shape which has two private data member length and width .
create constructor overloading.  Implement the class.*/
#include<iostream>
using namespace std;
#define GREEN   "\033[1;32m"  // Define a macro for green text color

class Shape
{
private:
    float length, width;

public:
    // Default constructor
    Shape()
    {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Shape(float a, float b)
    {
        length = a;
        width = b;
    }

    // Display function to calculate and display area
    void display();
};

int main()
{
    Shape s1;              // Create a Shape object with default values
    Shape calculate(5, 7); // Create a Shape object with specific values

    cout << GREEN; // Change text color to green
    cout << "\t\t\tOutput is Here\t\t\t" << endl;

    s1.display();         // Display the area of s1
    calculate.display();  // Display the area of calculate
}

void Shape::display()
{
    float f = length * width;
    cout << "Calculate: " << f << endl;
}
