#include<iostream>
#include<iomanip>
using namespace std;
class Employee{

int empID;
string fullname;
string email;
long long int phone;
public:
    Employee(){
    }
    Employee(int empID,string fullname,string email,long long int phone){
    this->empID=empID;
    this->fullname=fullname;
    this->email=email;
    this->phone=phone;
    }
    void setEmpID(int empID){
    this->empID=empID;}
    void setFullname(string fullname){
        this->fullname=fullname;
    }
    void setEmail(string email){
    this->email=email;
    }
    void setPhone(long long int phone){
    this->phone=phone;
}

int getEmpID(){
return empID;
}
string getFullname(){
return fullname;
}
string getEmail(){
return email;
}
long long int getPhone(){
return phone;
}

};

int main(){

Employee e;
 int eid;
 string fullname;
 string email;
 long long int phone;

cout<<"enter the id";
cin>>eid;
e.setEmpID(eid);

cout<<"enter the name";
cin>>fullname;
e.setFullname(fullname);

cout<<endl<<e.getEmpID()<<endl<<e.getFullname();
return 0;
}
