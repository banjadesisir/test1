#include<iostream>
#include<iomanip>
using namespace std;

template <class T>
void Swapp(T &x, T &y){
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 5;
    int b = 3;
    Swapp(a,b);
    cout<<endl<<"a : "<<a;
    cout<<endl<<"b : "<<b;
return 0;
}
