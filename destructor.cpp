#include<iostream>
#include<iomanip>
using namespace std;
class cuboid{
private:
     double length;
    double breadth;
    double height;
public :
        void read_cuboid(){
    cout<<"Enter the lenght, breadth, height";
    cin>>length>>breadth>>height;
    }
    void display_cuboid(){
    cout<<"the cuboid is of the measurements:"<<endl;
    cout<<length<<breadth<<height;
    }
    double total_surface_area(){
    double tsa=(2*(length*breadth+breadth*height+length*height));
    return tsa;
    }
    double volume(){
     double v=(length*breadth*height);
     return v;
    }

    cuboid(double l, double b=30, double h=25){
    length=l;
    breadth=b;
    height=h;
    }
    cuboid(){
  cout<<"constructor called for length="<<length<<"breadth="<<breadth<<"height="<<height<<endl;
    length=1;
    breadth=1;
    height=1;}
    //add a destructor
    ~cuboid(){
    cout<<"destruction called for length="<<length<<"breadth="<<breadth<<"height="<<height<<endl;
    }


};
int main(){
//create 3 objects
cuboid c1(7,5,9), c2(3,4,8), c3;
cout<<c1.volume()<<endl;
cout<<c2.total_surface_area()<<endl;
c3=c1;
cout<<c3.volume()<<endl;

return 0;
}
