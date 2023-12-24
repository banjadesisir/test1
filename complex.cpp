#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Complex; // Forward declaration

class Number {
double real;
double img;

public:
Complex convertToComplex();

Number() {
real = 0.0;
img = 0.0;
}

Number(double real, double img) {
this->real = real;
this->img = img;
}

double getReal() const {

return real;
}

void setReal(double real) {
this->real = real;
}

double getImg() const {
return img;
}

void setImg(double img) {
this->img = img;
}
};

class Complex {
double real;
double img;

public:
double calcMod() {
double mod = sqrt(pow(real, 2) + pow(img, 2));
return mod;
}

double getReal() const {
return real;
}

void setReal(double real) {
this->real = real;
}

double getImg() const {
return img;
}

void setImg(double img) {
this->img = img;
}
};

Complex Number::convertToComplex() {
Complex c1;
c1.setReal(real);
c1.setImg(img);
return c1;
}

int main() {
Number n1(30, 40);
Complex c = n1.convertToComplex();
cout << c.calcMod();
return 0;
}
