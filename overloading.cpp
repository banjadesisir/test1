//a program to demonstrate the use of ++ operator(unary)overloading
#include<iostream>
#include<iomanip>
using namespace std;
//class definitation
class Circle{
double radius;

//,methods
public:
Circle(){
radius=1;
}
Circle(double radius){
    this->radius=radius;
}
~Circle(){
cout<<"destructor called for"<<endl<<"radius"<<radius;
}
double setRadius(double radius){
this->radius=radius;
}
double getRadius(){
return radius;
 }
 void operator--();
//Circle operator-(Circle );
};

int main(){
	
Circle c1(30),c2(20),c;
cout<<c1.getRadius();
cout<<endl<<c2.getRadius();
--c1;
cout<<endl<<"after incrementely"<<c1.getRadius();
//c2=c2+5;
--c2;
cout<<endl<<"after incrementing"<<c2.getRadius();
//c=c1-c2-5;
//cout<<"the sum is="<<c.getRadius();
return 0;
}
void Circle::operator--(){
--radius;
}

/*Circle Circle:: operator-(Circle c){
	Circle temp;
	double radius;
	radius=this->radius+c.getRadius();
	temp.setRadius(radius);
	return temp;
	
	
}*/
