/*Write a program that will add two private members of a class  using a friend function named add().
The class has two objects. A constructor with a single parameter to set the value.*/

#include<iostream>
using namespace std;

class cse{
private:
    float mid, sfinal;

public:
    cse(float a){
        mid = a;
        sfinal = 20;
    }
    friend void add(cse ob1,cse ob2)
    {
        float result;
        result = ob1.mid + ob2.sfinal;
        cout<<"The Result is: "<<result<<endl;
    }
};
int main()
{
    cse s1(10);
    cse s2(60);

    add(s1, s2);
}
