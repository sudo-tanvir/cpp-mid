#include <iostream>
using namespace std;

class university{
    public :
        string dep;
        int intake;
        int nos;
    university(string d, int i,int n){
        dep = d;
        intake = i;
        nos = n;
    }

};

void displayInfo(university bubt){
    cout<<"Department is: "<<bubt.dep<<endl;
    cout<<"Intake is: "<<bubt.intake<<endl;
    cout<<"Number Of Student is: "<<bubt.nos<<endl;
}
int main (){
   university uni[2] = {university("cse",44,26),university("EEE",34,45)};
    displayInfo(uni[0]);
    displayInfo(uni[1]);
}

