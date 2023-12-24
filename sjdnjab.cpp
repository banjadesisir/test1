#include<iostream>
using namespace std;
int main(){
	float num[5]={1.0,-1.2345,2350.1};
	cout.setf(ios::showpos);
	cout.setf(ios::scientific);
	cout.precision(2);
	for(int i=0;i<5;i++){
		cout.width(20);
		cout.fill('$');
		cout<<num[i]<<endl;
		
		
	}
	return 0;
	
}