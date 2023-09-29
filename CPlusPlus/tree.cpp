//A class name tree which has two properties Length width the member Function SIZE will calculate the size of a tree. The value of tree properties will be further From the user, now implement the class by creative object
#include<iostream>
using namespace std;

class tree
{
public:
    float length,width;

    float size();
};

int main()
{
    tree t1;
    cout<<"Enter Tree Length: ";
    cin>>t1.length;
    cout<<"Enter Tree width: ";
    cin>>t1.width;

    cout<<"\t\t\t\t Output is Here \t\t\t\t"<<endl;
    cout<<"The Result is: "<<t1.size();
}

float tree::size()
{
    float result = length * width ;
    return result;
}
