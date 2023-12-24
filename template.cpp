#include<iostream>
using namespace std;
template<class T>
class Calculator{
private:
    T num1,num2;
public:
    Calculator(T n1,T n2){
    num1=n1;
    num2=n2;


    }

    void displayResult(){
    cout<<"Nos.are:"<<num1<<"and"<<num2<<endl;
    cout<<"sum="<<add()<<endl;
    cout<<"difference="<<subtract()<<endl;
    cout<<"product="<<multiply()<<endl;
    cout<<"division="<<divide()<<endl;
    }
    T add(){return num1+num2;}
    T subtract(){return num1-num2;}
    T multiply(){return num1*num2;}
    T divide(){return num1/num2;}



};

int main(){
Calculator<int> intCalc(2,1);
Calculator<float> floatCalc(2.4,1.2);
cout<<"int result:"<<endl;
intCalc.displayResult();
cout<<endl<<"float Results:"<<endl;
floatCalc.displayResult();
return 0;

}
