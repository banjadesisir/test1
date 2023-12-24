#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class Sphere;
class Cube;
Cube convertToCube(Sphere s);
Sphere convertToSphere(Cube c);
class Sphere{
private:
        double radius;
public:
    Sphere(){
    this->radius = 0;
    }
    Sphere(double radius){
    this->radius = radius;
    }
    void setRadius(double radius){
    this->radius = radius;
    }
    double getRadius(){
    return this->radius;
    }
    double calculateVolume(){
    return 4.0/3.0 * 22.0/7.0 * pow(radius, 3);
    }

};
class Cube{
private:
    double length;
public:
    Cube(){
    this->length = 0;
    }
    Cube(double length){
    this->length = length;
    }
    void setLength(double length){
    this->length = length;
    }
    double getLength(){
    return this->length;
    }
    double calculateVolume(){
    return  pow(length, 3);
    }

};
Cube convertToCube(Sphere s){
double volume, length;
Cube c;
volume = s.calculateVolume();
length = pow(volume, 1.0/3.0);
c.setLength(length);
return c;
}
Sphere convertToSphere(Cube c){
double volume, radius;
Sphere s;
volume = c.calculateVolume();
radius = pow((volume *7.0*3.0)/(22.0 * 4.0), 1.0/3.0);
s.setRadius(radius);
return s;
}
/// main implementation
int main(){
Sphere s1(20), s2;
Cube c1(30), c2;
///DATA CONVERSION
c2 = convertToCube(s1);
cout<<"Initially the radius of s1 = "<<s1.getRadius();
cout<<endl<<"Initially the volume of s1 = "<<s1.calculateVolume();
cout<<endl<<"#########################";
cout<<endl<<"The volume of the cube formed by this sphere is "<<c2.calculateVolume();
cout<<endl<<" The length of the cube with this volume is "<<c2.getLength();

return 0;

}
