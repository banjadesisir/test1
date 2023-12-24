#include<iostream>
using namespace std;
class Number{
int a;
public:
Number(){
    a=0;

}
Number(int num){
    a=num;
}
Number(Number &obj){
    a=obj.a;

}
void display(){
    cout<<"the nu is"<<a<<endl;

}


};
int main(){
    Number x,y,z(20);
    x.display();
    y.display();
    z.display();
    Number x1(y);
    x1.display();
    return 0;
    
}