#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n,i;
cout<<endl<<"enter the number whose multiple is to be calculated:";
cin>>n;
for(i=0;i<=n;i++){
if (i%2!=0){

int ans=n*i;
}
if(ans<100){
cout<<endl<<n<<"*"<<i<<"="<<ans;
}
}
return 0;



}
