//This program will demonstrate the concept of defining methods outside of the class
#include<iostream>
#include<iomanip>
using namespace std;
class Employee(){
	private:
		int empID;
		string fullname;
		double salary;
    public:

			void setEmpID(int empID);
			void setFullName(string fullname);
			void setSalary(double salary);
			//getters
			int getEmpID();
			string setFullName();
			double setSalary();
			Employee();//default cots
			Employee(int empID, string fullname,double salary);//parameter cots
			~Employee();
			void raiseSalary(int eid,double newSalary);
			};
int main(){
///create the object
///className objectName, objectName2
Employee e1, e2(101,"Ram Singh", 3400);
int sid;
string name;
double sal;
cout<<"Enter the employee ID of 1st employee:"<endl;
cin>>eid;
e1.setEmpID(eid);
cout<<"Enter the Full Name of 1st employee:"<endl;
cin>>name;
fflush(stdin);
e1.setFullName(name);
cout<<"Enter the salary of 1st employee:"<endl;
cin>>sal;
e1.setSalary(sal);

cout<<"EID:"<<e1.getEmpID()
<<endl<<"FullName"<<e1.getFullName()
<<endl<<"Salary"<<e1.getSalary();
e1.raiseSalary(101,45000);
return 0;

}
///definitions
void Employee::setEmpID(int empID){
this->empID=empID;
}
void Employee::setFullName(string fullname){
this->fullname=fullname;
}
void Employee::setSalary(double salary){
this->salary=salary;
}
int Employee::getEmpID(){
return this->empID;
}
string Employee::getFullName(){
return this->fullname;
}
double Employee::getSalary(){
return this->Salary;
}///constructor
Employee::Employee(){///defined for no error in runtime
///do nothing
cout<<endl<<"constructor called for";
}
///parameterized cots
Employee::Employee(int empID,string fullname,double salary){
this->empID=empID;
this->fullname=fullname;
this->salary=salary;
cout<<endl<<"constructor called for";

}
///destructor
Employee::~Employee(){
cout<<endl<<"Destructor called for object at"<<this;
}
void Employee::raiseSalary(int empID, double newSalary){
if(this->empID==empID){
    this->salary=newSalary;
    ///this->setSalary(newSalary);
}
}
