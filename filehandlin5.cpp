#include<iostream>
#include<fstream>

using namespace std;
int main(){
ofstream fout;
char ch;
fout.open("example.txt");
 cout<<"enter a character and end with '@':";
do{

    cin.get(ch);
    fout.put(ch);


}
while(ch!='@');
fout.close();
cout<<"\n DAta written succesfully";



	return 0;

}
