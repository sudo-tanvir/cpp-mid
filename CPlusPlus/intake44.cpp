#include<iostream>
using namespace std;

class intake46
{
public:

    string name, add, program;
    long Id;
    int date_of_birth;
    float mid, sfinal,marks;


    float final_marks();
};

int main()
{
    intake46 s1;
    cout << "Enter Your Name: ";
    cin >> s1.name;
    cout << "Enter Your Address: ";
    cin >> s1.add;
    cout << "Enter Your Program: ";
    cin >> s1.program;
    cout << "Enter Your Id: ";
    cin >> s1.Id;

    cout << "Enter Your Date Of Birth(Integer): ";
    cin >> s1.date_of_birth;

    cout << "Enter Your Mid: ";
    cin >> s1.mid;
    cout << "Enter Your Sfinal: ";
    cin >> s1.sfinal;
    float mark = s1.final_marks();
    cout<<"Total Marks: "<<mark;

    return 0;
}

float intake46::final_marks()
{

    float result = mid + sfinal ;
    return result;

}
