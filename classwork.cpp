#include<iostream>
#include<iommanip>
using namespace std;
class Order;
class Product;
class Customer{
int customerID;
string fullname;
string username;
string password;
string email;
public:
    Customer(){
     customerID=100;
     fullname="shishir";
     username="helloo";
     password="a111";
     email="hancy@123";}

     Customer(int customerID,string fullname,string username,string password,string email){
     this->customerID=customerID;
     this->fullname=fullname;
     this->username=username;
     this->password=password;
     this->email=email;
     }
     bool registerr();
     bool unsubscribe();





    }





};
