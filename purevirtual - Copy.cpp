#include<iostream>
using namespace std;
class Shape{
protected:
    string color;
public:
    virtual float area()=0;
    string getColor(){
        return color;
    }
};
class Circle:public Shape{
private:
    float radius;
public:
    void setValue(){
    cout<<endl<<"Enter radius:";
    cin>>radius;
    cout<<endl<<"Enter color:";
    cin>>color;
    }
    float area(){
        return(3.14*radius*radius);
    }
};
class Rectangle:public Shape{
private:
    float len,bre;
public:
    void setValue(){
    cout<<endl<<"Enter length and breadth:";
    cin>>len>>bre;
    cout<<endl<<"Enter color:";
    cin>>color;
    }
    float area(){
        return(len*bre);
    }
};
int main(){
    Circle c;
    Rectangle r;
    c.setValue();
    r.setValue();
    cout<<endl<<"Area of "<<c.getColor()<<" circle="<<c.area();
    cout<<endl<<"Area of "<<r.getColor()<<" rectangle="<<r.area();
    return 0;
}
