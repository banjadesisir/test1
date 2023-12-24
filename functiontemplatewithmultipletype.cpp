#include<iostream>
using namespace std;
template<class T1, class T2>
void display(T1 x,T2 y){
cout<<x<<"\t"<<y<<endl;


}
int main(){
cout<<"Call with the integer and character:";
display(45,'z');
cout<<endl<<"call with float and integer";
display(22.22,77);
return 0;


}
