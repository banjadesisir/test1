#include <iostream>
#include <iomanip>
using namespace std;

class subject; // forward declaration

class teacher {
    int teacherid;
    string fname;
    double salary;

public:
    int getId() {
        return teacherid;
    }

    void setId(int teacherid) {
        this->teacherid = teacherid;
    }

    string getFname() {
        return fname;
    }

    void setFname(string fname) {
        this->fname = fname;
    }

    double getSalary() {
        return salary;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    teacher() {
        teacherid = 0;
        fname = "_______";
        salary = 0.0;
    }

    teacher(int teacherid, string fname, double salary) {
        this->teacherid = teacherid;
        this->fname = fname;
        this->salary = salary;
    }

    void teaches(subject& s1);
};

class subject {
    int subjectId;
    string subTitle;
    int creditHour;

public:
    int getSubjectId() {
        return subjectId;
    }

    void setSubjectId(int subjectId) {
        this->subjectId = subjectId;
    }

    string getSubTitle() {
        return subTitle;
    }

    void setSubTitle(string subTitle) {
        this->subTitle = subTitle;
    }

    int getCreditHour() {
        return creditHour;
    }

    void setCreditHour(int creditHour) {
        this->creditHour = creditHour;
    }
};

void teacher::teaches(subject& s1) {
    cout << "TeacherID = " << teacherid << endl
         << "Name = " << fname << endl
         << "Salary = " << salary << endl
         << "Subject = " << s1.getSubTitle() << endl;
}

int main() {
    subject s1;
    teacher t1;

    // Set subject data
    s1.setSubjectId(1);
    s1.setSubTitle("OOP");
    s1.setCreditHour(3);

    // Set teacher data
    t1.setId(101);
    t1.setFname("Shishir Sharma Banjade");
    t1.setSalary(100000);

    // Call teaches() function to display the teacher's details and the subject title
    t1.teaches(s1);

    return 0;
}


