
#include<iostream>
#include<iomanip>
using namespace std;
class Student{
private:
    int stdId;
    string stdName;
    int stdRoll;
public:
    Student();
    Student(int stdId,string stdName, int stdRoll);

    void setStdId(int stdId);
    int getStdId();

    void setStdName(string stdName);
    string getStdName();

    void setStdRoll(int stdRoll);
    int getStdRoll();

    class Doj{
private:
    int day, month, year;
public:
    Doj();
    Doj(int day, int month, int year);

    void setDay(int day);
    int getDay();

    void setMonth(int Month);
    int getMonth();

    void setYear(int year);
    int getYear();
    };
};
int main(){
    Student s1,s2;
    Student::Doj d1,d2;
    cout<<endl<<"**Student Info**";
    cout<<endl<<"Id: "<<s1.getStdId();
    cout<<endl<<"Name: "<<s1.getStdName();
    cout<<endl<<"Roll no.: "<<s1.getStdRoll();
    cout<<endl<<endl<<"Date of Joining: ";
    cout<<d1.getDay()<<"/"<<d1.getMonth()<<"/"<<d1.getYear()<<endl;
return 0;
}
Student::Student(){
stdId = 101;
stdName = "Shishir Sharma Banjade";
stdRoll = 1;
}

Student::Student(int stdId,string stdName, int stdRoll){
this->stdId = stdId;
this->stdName = stdName;
this->stdRoll = stdRoll;
}

void Student::setStdId(int stdId){
this->stdId = stdId;
}
int Student::getStdId(){
return stdId;
}

void Student::setStdName(string stdName){
this->stdName = stdName;
}

string Student::getStdName(){
return stdName;
}

void Student::setStdRoll(int stdRoll){
this->stdRoll = stdRoll;
}

int Student::getStdRoll(){
return stdRoll;
}

Student::Doj::Doj(){
day = 3;
month = 11;
year = 1999;
}

Student::Doj::Doj(int day, int month, int year){
this->day = day;
this->month = month;
this->year = year;
}


void Student::Doj::setDay(int day){
this->day = day;
}

int Student::Doj::getDay(){
return day;
}

void Student::Doj::setMonth(int month){
this->month = month;
}

int Student::Doj::getMonth(){
return month;
}

void Student::Doj::setYear(int year){
this->year = year;
}

int Student::Doj::getYear(){
return year;
}
