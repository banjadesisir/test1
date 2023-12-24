#include<iostream>
#include<iomanip>

using namespace std;
class Sphere;
double calculateVolume(Sphere s);
class Sphere{
private:
    double radius;
public:
	Sphere();
	Sphere(double radius);
	~Sphere();
	void setRadius(double radius);
	double setRadius();
};

int main(){
Sphere s1(35), s2(22.25);
double volume=calculateVolume(s1);
cout<<"volume="<<endl<<volume;
return 0;
}
Sphere::Sphere setRadius();





