#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
long long int nFactorial(long long int n);
long long int rFactorial(long long int r);
long long int n_minus_rFactorial(long long int temp);
int main(){
long long int n,r;
long long int nrAns,nAns,rAns;
long long int combination;
cout<<endl<<"Enter the total number of elements (n): ";
cin>>n;
cout<<endl<<"Enter the total number of elements to be chosen (r): ";
cin>>r;

if(r<0 || n<0){
    cout<<endl<<"There is no factorial of negative number";
    exit(-1);
}
long long int temp = n-r;
nAns = nFactorial(n);
rAns = rFactorial(r);
nrAns = n_minus_rFactorial(temp);
combination = (nAns)/((rAns)*(nrAns));
//cout<<endl<<nAns;
//cout<<endl<<rAns;
//cout<<endl<<nrAns;
cout<<endl<<"The Combination of "<<n<<"C"<<r<<" is "<<combination;
return 0;
}

long long int nFactorial(long long int n){
if(n == 0 || n == 1){
    return 1;
}else{
return ((n)*nFactorial(n-1));
}
}

long long int rFactorial(long long int r){
if(r == 0 || r == 1){
    return 1;
}else{
return ((r)*rFactorial(r-1));
}
}

long long int n_minus_rFactorial(long long int temp){

if(temp==0 || temp==1){
    return 1;
}else{
return (temp*n_minus_rFactorial(temp-1));
}
}
