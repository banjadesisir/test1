
#include<iostream>
#include<iomanip>
using namespace std;
class Employee;
class Department{
private:
    int deptID;
    string deptName;
    long long int phone;
    string address;
public:
    Department();
    Department(int deptID, string deptName, long long int phone, string address);

    void setDeptID(int deptID);
    void setDeptName(string deptName);
    void setPhone(long long int phone);
    void setAddress(string address);

    int getDeptID();
    string getDeptName();
    long long int getPhone();
    string getAddress();

   int calculateTotalStaff(Employee *e, int);
};
class Employee{
private:
    int empID;
    string fullName;
    string email;
    long long int phone;
    double salary;
    Department dept;
public:
    Employee();
    Employee(int empID, string fullName, string email, long long int phone, double salary, Department dept);

    void setDept(Department dept);
    void setEmpID(int empID);
    void setFullName(string fullName);
    void setEmail(string email);
    void setPhone(long long int phone);
    void setSalary(double salary);

    Department getDept();
    int getEmpID();
    string getFullName();
    string getEmail();
    long long int getPhone();
    double getSalary();

    void changeSalary(int empid, int size,Employee *e);
};
int main(){
Department d1;
Employee *e;
e = new Employee[3];
int i;
int eId;
string fName;
string email;
long long int phone;
double salary;
int dId;
int deId;
string dName;
long long int dphone;
string address;
cout<<endl<<"Enter the Department ID: ";
cin>>dId;
fflush(stdin);
cout<<"Enter the Department Name: ";
getline(cin,dName);
cout<<"Enter the Department Phone Number: ";
cin>>dphone;
cout<<"Enter the Department Address: ";
cin>>address;

d1.setDeptID(dId);
d1.setDeptName(dName);
d1.setPhone(dphone);
d1.setAddress(address);

for(i=0;i<3;i++){
        cout<<endl<<"Enter the details of "<<i+1<<" Employee working on this department: ";

    cout<<endl<<"Enter the Employee ID: ";
    cin>>eId;

    fflush(stdin);
    cout<<"Enter the Full Name: ";
    getline(cin,fName);

    fflush(stdin);
    cout<<"Enter the Email: ";
    getline(cin,email);

    cout<<"Enter the Phone: ";
    cin>>phone;

    cout<<"Enter the Salary: ";
    cin>>salary;
    (e+i)->setEmpID(eId);
    (e+i)->setFullName(fName);
    (e+i)->setEmail(email);
    (e+i)->setPhone(phone);
    (e+i)->setSalary(salary);
    (e+i)->setDept(d1);
}
int value = d1.calculateTotalStaff(&e[0],3);
cout<<endl<<"The total staff in Department "<<d1.getDeptID()<<" is "<<value;
for(i=0;i<3;i++){
        cout<<endl<<endl<<"Info of "<<i+1<<" Employee";
cout<<endl<<endl<<"Employee ID: "<<(e+i)->getEmpID();
cout<<endl<<"Employee Full Name: "<<(e+i)->getFullName();
cout<<endl<<"Employee Email: "<<(e+i)->getEmail();
cout<<endl<<"Employee Phone: "<<(e+i)->getPhone();
cout<<endl<<"Employee Salary: "<<(e+i)->getSalary();
cout<<endl<<"Employee's Department ID: "<<(e+i)->getDept().getDeptID();
cout<<endl<<"Department's Name: "<<(e+i)->getDept().getDeptName();
}
int empid;
cout<<endl<<endl<<"Enter the employee's ID whose salary is to be changed: ";
cin>>empid;
e->changeSalary(empid,3,&e[0]);

delete[] e;
return 0;
}

int Department::calculateTotalStaff(Employee *e, int size){
int i,count = 0;
for(i=0;i<size;i++){
    if((e+i)->getDept().getDeptID() == this->deptID){
        ++count;
    }
}
return count;
}

Department::Department(){
deptID = 197l;
deptName = "Asymptotes";
phone = 9814594302;
address = "Kathmandu";
}

Department::Department(int deptID, string deptName, long long int phone, string address){
this->deptID = deptID;
this->deptName = deptName;
this->phone = phone;
this->address = address;
}

void Department::setDeptID(int deptID){
this->deptID = deptID;
}
void Department::setDeptName(string deptName){
this->deptName = deptName;
}
void Department::setPhone(long long int phone){
this->phone = phone;
}
void Department::setAddress(string address){
this->address = address;
}

int Department::getDeptID(){
return deptID;
}
string Department::getDeptName(){
return deptName;
}
long long int Department::getPhone(){
return phone;
}
string Department::getAddress(){
return address;
}


Employee::Employee(){
empID = 101;
fullName = "Radha Koirala";
email = "radhakoirala34@gmail.com";
phone = 9816789022;
salary = 87000;
dept = dept;
}

Employee::Employee(int empID, string fullName, string email, long long int phone, double salary, Department dept){
this->empID = empID;
this->fullName = fullName;
this->email = email;
this->phone = phone;
this->salary = salary;
this->dept = dept;
}

void Employee::setDept(Department dept){
this->dept = dept;
}
void Employee::setEmpID(int empID){
this->empID = empID;
}
void Employee::setFullName(string fullName){
this->fullName = fullName;
}
void Employee::setEmail(string email){
this->email = email;
}
void Employee::setPhone(long long int phone){
this->phone = phone;
}
void Employee::setSalary(double salary){
this->salary = salary;
}

Department Employee::getDept(){
return dept;
}
int Employee::getEmpID(){
return empID;
}
string Employee::getFullName(){
return fullName;
}
string Employee::getEmail(){
return email;
}
long long int Employee::getPhone(){
return phone;
}
double Employee::getSalary(){
return salary;
}
void Employee::changeSalary(int empid, int size,Employee *e){
double newsal;
for(int i=0;i<size;i++){
if((e+i)->getEmpID() == empid){
cout<<endl<<"Enter the new salary: ";
cin>>newsal;
(e+i)->setSalary(newsal);
        cout<<endl<<endl<<"Info of "<<i+1<<" Employee after changing the salary: ";
cout<<endl<<endl<<"Employee ID: "<<(e+i)->getEmpID();
cout<<endl<<"Employee Full Name: "<<(e+i)->getFullName();
cout<<endl<<"Employee Email: "<<(e+i)->getEmail();
cout<<endl<<"Employee Phone: "<<(e+i)->getPhone();
cout<<endl<<"Employee Salary: "<<(e+i)->getSalary();
cout<<endl<<"Employee's Department ID: "<<(e+i)->getDept().getDeptID();
cout<<endl<<"Department's Name: "<<(e+i)->getDept().getDeptName();
}
}
}

