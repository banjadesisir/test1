#include<iostream>
#include<iomanip>
using namespace std;
class Teacher(){
	private:
		int empID;
		string fullname;
		double salary;
    public:

			void setteacherID(int empID);
			void setFullName(string fullname);
			void setSalary(double salary);
			int getEmpID();
			string setFullName();
			double setSalary();

			Teacher();//default cots
			Teacher(int empID, string fullname,double salary);//parameter cots
			~teacher();
			};
			int main(){
///create the object
///className objectName, objectName2
teacher t1, e2(101,"Ram Singh", 3400);
int sid;
string name;
double sal;
cout<<"Enter the employee ID of 1st employee:"<endl;
cin>>eid;
e1.setTeacherID(eid);
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

return 0;
			}

