#include<iostream>
using namespace std;
void divide(double x,double y){
	cout<<"inside function"<<endl;
	try{
		if(y==0.0)
		throw y; //throwing double
		else
		cout<<"division="<<x/y<<endl;
		
	}
	catch(double){
		cout<<"caught double in side a function"<<endl;
		throw;
		
	}
	cout<<"end of function"<<endl;
	
}
int main(){
	cout<<"inside main"<<endl;
	try{
		divide(10.5,2.0);
		divide(20.0,0.0);
		
	}
	catch(double){
		cout<<"caught double inside main"<<endl;
		
	}
	cout<<"end of main"<<endl;
	return 0;
	
}