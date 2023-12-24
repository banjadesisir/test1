#include<iostream>
using namespace std;
template <class T>
T Large(T n1,T n2){
return (n1>n2)?n1:n2;
}
int main(){
int i1,i2;
float f1,f2;
char c1,c2;
cout<<"enter two intwgers:"<<endl;
cin>>i1>>i2;
cout<<Large(i1,i2)<<"is larger "<<endl;
cout<<endl<<"enter two flaot number"<<endl;
cin>>f1>>f2;
cout<<endl<<Large(f1,f2)<<"is larger"<<endl;




cout<<endl<<"enter two characters:"<<endl;
cin>>c1>>c2;
cout<<Large(c1,c2)<<"has large ASCII value"<<endl;
return 0;

}
