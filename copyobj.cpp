#include<iostream>
#include<iomanip>
using namespace std;
class Ferrari{
private:
    string chasisNumber;
    double price;
    string color;
public:
    Ferrari(){
    chasisNumber="";
    price=0.0;
    color="red";
    }
    //parameterized constructor
    Ferrari(string chasisNumber,double price, string color){
    this->chasisNumber=chasisNumber;
    this->price=price;
    this->color=color;
    }
    //copy constructor
    Ferrari(Ferrari &f){
        cout<<"copy cots invoked"<<this<<endl;
        //ferrari(ferrari *f)
    this->chasisNumber=f.chasisNumber;//f->chasisNumber
    this->price=f.price;//f->price
    this->color=f.color;//f->color

    }
    void getChasisNumber(){
        cout<<endl<<this<<":"<<chasisNumber;
    }
};

int main(){
Ferrari f1("oikdhsj21", 3525, "red"),f2=f1;//f2(&f1)
f2.getChasisNumber();
return 0;}












