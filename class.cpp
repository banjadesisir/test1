#include<iostream>
#include<iomanip>
using namespace std;
///declare the class
class student{
///data members
private:
    int roll;
    string name;
    double marks;
public:
    void read_data(){
    cout<<"Enter roll, name and marks"<<endl;
    cin>>roll;
    getline(cin,name);
    fflush(stdin);
    cin>>marks;
    }
///second method
void display_data(){
cout<<"Roll="<<roll<<endl;
cout<<"Name="<<name<<endl;
cout<<"Marks="<<marks<<endl;
}
};
int main(){
student s1;
//cout<<"input roll";
//cin>>s1.roll;
s1.read_data();
s1.display_data();
return 0;
}
