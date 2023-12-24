#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the name of a and b";
cin>>a>>b;
try{
if(b==0){
    throw b;

}
else{

    cout<<endl<<"a/b="<<(float)a/b;

}


}
catch(int x){
    cout<<endl<<"divide by zero exception, b="<<x;
}
return 0;


}

