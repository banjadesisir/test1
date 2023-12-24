#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
private:
    int empID;
    string fullName;
    double salary;
public:
    Employee();
    Employee(int empID, string fullName, double salary);

    void setEmpID(int empID);
    void setFullName(string fullName);
    void setSalary(double salary);

    int getEmpID();
    string getFullName();
    double getSalary();

    void checKEmployee(Employee *e,int size);
};
int main(){
Employee *e;
int size,i;
int eID;
string name;
double sal;
cout<<endl<<"Enter the total number of employees you want to have: ";
cin>>size;
e = new Employee[size];
cout<<endl<<"----------------------------------------------------------------------------------";
cout<<endl<<"Reading Informations: "<<endl;
for(i=0;i<size;i++){
    cout<<endl<<"Enter Employee ID: ";
    cin>>eID;
    fflush(stdin);
    cout<<"Enter Employee Name: ";
    getline(cin,name);
    cout<<"Enter Employee Salary: ";
    cin>>sal;

    (e+i)->setEmpID(eID);
    (e+i)->setFullName(name);
    (e+i)->setSalary(sal);
}
cout<<endl<<"----------------------------------------------------------------------------------";
cout<<endl<<"Displaying Informations: "<<endl;
    cout<<endl<<"ID\t\t\t\tName\t\t\t\t\tSalary";
for(i=0;i<size;i++){

    cout<<endl<<(e+i)->getEmpID()<<"\t\t\t\t"<<(e+i)->getFullName()<<"\t\t\t\t"<<(e+i)->getSalary();

}
e->checKEmployee(&e[0],size);
return 0;
}
Employee::Employee(){
empID = 101;
fullName = "Nelson Mandela";
salary = 69000;
}
Employee::Employee(int empID, string fullName, double salary){
this->empID = empID;
this->fullName = fullName;
this->salary = salary;
}

void Employee::setEmpID(int empID){
this->empID = empID;
}
void Employee::setFullName(string fullName){
this->fullName = fullName;
}
void Employee::setSalary(double salary){
this->salary = salary;
}

int Employee::getEmpID(){
return empID;
}
string Employee::getFullName(){
return fullName;
}
double Employee::getSalary(){
return salary;
}

void Employee::checKEmployee(Employee *e,int size){
double max = 0;
int i;
for(i=0;i<size;i++){
if((e+i)->salary > max){
    max = (e+i)->getSalary();
}
}
cout<<endl<<"----------------------------------------------------------------------------------";
cout<<endl<<"Searched Informations of those employee whose either salary is highest or name starts with S: "<<endl;
    cout<<endl<<"ID\t\t\t\tName\t\t\t\t\tSalary";
for(i=0;i<size;i++){
        if((e+i)->getSalary() == max || (e+i)->getFullName()[0]=='S' || (e+i)->getFullName()[0]=='s'){
    cout<<endl<<(e+i)->getEmpID()<<"\t\t\t\t"<<(e+i)->getFullName()<<"\t\t\t\t"<<(e+i)->getSalary();
        }
}

}
