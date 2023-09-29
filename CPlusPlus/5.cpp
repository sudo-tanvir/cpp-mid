//a class name building which has colour,height,area on the attributes.a function will display all the information of the building and object will pass information while created implement.
#include<iostream>
using namespace std;

class building
{
public:
    string color;
    float height, area;

    void display();
};
int main()
{
    building b1;
    cout<<"Enter Building Color: ";
    cin>>b1.color;
    cout<<"Enter Height: ";
    cin>>b1.height;
    cout<<"Enter Area: ";
    cin>>b1.area;

    b1.display();
}
void building::display()
{
    cout<<"\t\t\t\t Output is Here \t\t\t\t"<<endl;
    cout << "Color: " << color << endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Area: "<<area<<endl;
}

