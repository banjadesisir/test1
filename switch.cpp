#include<iostream>
using namespace std;

int main(){
char s;
double a=12.5,b=23.5;
cout<<"Enter any symbol(+,-,*,/,%,e)"<<endl;
cin>>s;

switch(s){
case '+':
cout<<"a+b="<<a+b;
break;
case '-':
cout<<"a-b="<<a-b;
break;
case '*':
cout<<"a*b="<<a*b;
break;
case '/':
cout<<"a/b="<<a/b;
break;

case '%':
//ncout<<"a%b="<<a%b;
break;
case 'e':
break;
default:
    cout<<"Apekshya is very intelligent";
    return 0;
}



return 0;
}
