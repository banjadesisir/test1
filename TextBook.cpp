/***
This class will test if all the Books can be read and displayed
**/
#include<iostream>
#include<iomanip>
#include"Author.h"
#include"Book.h"
using namespace std;
int main(){
///instantiation
Book b1;
///receive the values from the user or use the constructor
cout<<b1.getTitle()<<endl; ///Java...
b1.setAuthorID(101);
b1.readData(101, "raman");
//b1.setFullName("Raman Sapkota");/// is protected in the derived class
b1.setEmail("Raman@gmail.com");
b1.setBookID(1195);
b1.setTitle("Java Programming");
b1.setPrice(795.75);
///to display the data
b1.displayData();
return 0;

}
