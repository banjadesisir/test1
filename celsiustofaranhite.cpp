
#include<iostream>
#include<iomanip>
using namespace std;
class Centigrade;
class Fahrenheit;
Fahrenheit convertToFahrenheit(Centigrade c);
Centigrade convertToCentigrade(Fahrenheit f);
class Centigrade{
private:
    double cTemperature;
public:
    Centigrade();
    Centigrade(double cTemperature);

    void setCTemperature(double cTemperature);
    double getCTemperature();
};

class Fahrenheit{
private:
    double fTemperature;
public:
    Fahrenheit();
    Fahrenheit(double fTemperature);

    void setFTemperature(double fTemperature);
    double getFTemperature();
};

int main(){
Centigrade c1(27),c2;
Fahrenheit f1(72),f2;
c2 = convertToCentigrade(f1);
f2 = convertToFahrenheit(c1);
cout<<endl<<"The original Centigrade: "<<c1.getCTemperature();
cout<<endl<<"The Fahrenheit converted from above Centigrade: "<<f2.getFTemperature();

cout<<endl<<"The original Fahrenheit: "<<f1.getFTemperature();
cout<<endl<<"The Centigrade converted from above Fahrenheit: "<<c2.getCTemperature();

}

Centigrade::Centigrade(){
cTemperature = 10;
}

Centigrade::Centigrade(double cTemperature){
this->cTemperature = cTemperature;
}

void Centigrade::setCTemperature(double cTemperature){
this->cTemperature = cTemperature;
}
double Centigrade::getCTemperature(){
return cTemperature;
}

Fahrenheit::Fahrenheit(){
fTemperature = 41;
}
Fahrenheit::Fahrenheit(double fTemperature){
this->fTemperature = fTemperature;
}

void Fahrenheit::setFTemperature(double fTemperature){
this->fTemperature = fTemperature;
}
double Fahrenheit::getFTemperature(){
return fTemperature;
}

Fahrenheit convertToFahrenheit(Centigrade c){
double f = (c.getCTemperature() * (180.0/100.0))+32.0 ;
Fahrenheit temp;
temp.setFTemperature(f);
return temp;
}
Centigrade convertToCentigrade(Fahrenheit f){
double c = (f.getFTemperature() - 32.0)*100.0/180.0 ;
Centigrade temp;
temp.setCTemperature(c);
return temp;
}
