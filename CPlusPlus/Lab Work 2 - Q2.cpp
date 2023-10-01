/*A class name spring which has data member month and year and member function named show_date().
The class has a parameterized constructor. It also has a destructor.
Implement the class by creating two objects.*/

#include<iostream>
using namespace std;

class spring{
public:
    double month, year;
    spring(double a, double b){
        month = a;
        year = b;
    }
    ~spring()
    {
        //Blank
    }
    void show_date();
};
int main()
{
    spring show(10,2003);

    show.show_date();
}
void spring::show_date()
{
    cout<<"Month is: "<<month<<endl;
    cout<<"Year is: "<<year<<endl;

}
