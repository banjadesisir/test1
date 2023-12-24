#include<iostream>
#include<iomanip>
using namespace std;
class cuboid{
private:
     double lenght;
    double breadth;
    double height;
public :
        void read_cuboid(){
    cout<<"Enter the lenght, breadth, height";
    cin>>lenght>>breadth>>height;
    }
    void display_cuboid(){
    cout<<"the cuboid is of the measurements:"<<endl;
    cout<<lenght<<breadth<<height;
    }
    double total_surface_area(){
    double tsa=(2*(lenght*breadth+breadth*height+lenght*height));
    return tsa;
    }
    double volume(){
     double v=(lenght*breadth*height);
     return v;
    }
    cuboid(double l, double b=30, double h=25){
    lenght=l;
    breadth=b;
    height=h;
    }
    cuboid(){
    lenght=1;
    breadth=1;
    height=1;
    }
};
int main(){
cuboid c1;
c1.display_cuboid();
cuboid c2(5);
c2.display_cuboid();
cout<<c2.volume();
return 0;
}
