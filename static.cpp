//This program will demonstrate the concept of defining methods outside of the class
#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
	private:
		int empID;
		string fullname;
		double salary;
static int totalEmployee;

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
			string getFullName();
			double getSalary();
			void raiseSalary(int eid,double newSalary);
			static void showTotalEmployee(){
			    cout<<totalEmployee;
			}
			};
			 int Employee::totalEmployee=0;
int main(){
    Employee e1[5],e2,e3;
    Employee::showTotalEmployee();
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
return this->salary;
}///constructor

Employee::Employee(){
++Employee::totalEmployee;///defined for no error in runtime
///do nothing
cout<<endl<<"constructor called for";
}
///parameterized cots
Employee::Employee(int empID,string fullname,double salary){
    ++Employee::totalEmployee;
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
