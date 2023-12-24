#include<iostream>
using namespace std;
class Base{
public:
~Base(){
//virtual~base();
cout<<"base destroyed"<<endl;
}
};
class Derv:public Base{
public:
~Derv(){
cout<<"derv destroyed"<<endl;

}

};
int main(){
Base *pBase=new Derv;
delete pBase;
return 0;
}
