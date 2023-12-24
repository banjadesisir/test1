#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
class Date{
    public:	
    int month,year,day;


    Date(){
    	year=0;
    	month=0;
    	day=0;
	}

    Date(int year,int month,int day){
        this->year=year;
        this->month=month;
        this->day=day;
    }
    
};

class Employee{
    private:
        int empId;
        string fullname;
        string email;
        Date dateofJoining;
   public:
        Employee(){
            empId=1;
            fullname="-";
            email="-";
        //    dateofJoining=NULL;
        }
        Employee(int empId,string fullname,string email,int year,int month,int day):dateofJoining(year,month,day),empId(empId),fullname(fullname),email(email){}
        
		int getEmpId(){
            return empId;
        }
        void setEmpId(int empId){
            this->empId=empId;
        }
        string getFullName(){
            return fullname;
        }
		void setfullName(string fullname){
		    this->fullname = fullname;
		}
        string getEmail(){
            return email;
        }
        void setEmail(string email){
            this->email = email;
        }
        Date getdateofjoining(){
            return dateofJoining;
        }
        void setdateofjoining(int year,int month,int day){
            this->dateofJoining.year = year;
            this->dateofJoining.month = month;
            this->dateofJoining.day = day;
        }

//       ~Employee();
};

class SalariedEmployee:public Employee{
    double salary;
    public:
    SalariedEmployee() : Employee(), salary(0.0) {}
    SalariedEmployee(double salary,int empId,string fullname,string email,int year,int month,int day):salary(salary),Employee(empId,fullname,email,year,month,day){}
    double monthlySal(int month){
        return(month*salary);
    }
};
int main(){
    
    SalariedEmployee s1;
    int m;
    int yr,mn,dy;
    string em,nm;
    
    cout<<"*Taking Info*"<<endl;
    cout<<"Enter Employee's ID: ";
    cin>>m;
    s1.setEmpId(m);
    cout<<"Enter Employee's Name: ";
    fflush(stdin);
    getline(cin,nm);
    s1.setfullName(nm);
    cout<<"Employee's Email: ";
    getline(cin,em);
    s1.setEmail(em);
    cout<<"Enter the Date (YY MM DD)";
    cin>>yr>>mn>>dy;
    s1.setdateofjoining(yr,mn,dy);
    
    //Displaying:
    cout<<endl<<"Name= "<<s1.getFullName()<<endl;
    cout<<"Id= "<<s1.getEmpId()<<endl
    	<<"Email= "<<s1.getEmail()<<endl;
    	Date joiningDate = s1.getdateofjoining();
    	cout<<"Date of Joining ="<<joiningDate.year<<"/"<<joiningDate.month<<"/"<<joiningDate.day<<endl;

return 0;
}
