//A class name bird which has two data member type string,float, A mamber Function will display all the information of two birds implement.

#include<iostream>
using namespace std;

class bird{
public:
    string name;
    float age;

    void display();
};
int main()
{
    bird b1;
    cout<<"Enter Bird Name: ";
    cin>>b1.name;
    cout<<"Enter Bird Age: ";
    cin>>b1.age;

    b1.display();
}
void bird::display()
{
    cout<<"\t\t\t\t Output is Here \t\t\t\t"<<endl;
    cout<<"Bird name is: "<<name<<endl;
    cout<<"Bird age is: "<<age<<endl;
}
