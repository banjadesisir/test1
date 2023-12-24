#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string fileName;
    cout<<endl<<"Enter the File Name: ";
    fflush(stdin);
    getline(cin,fileName);
    ofstream fileTest(fileName);
    char ch[50];
    int i=0;
    cout<<endl<<"Enter a text and end with @ sign: ";
    cin>>ch[0];
    while(ch[i]!='@'){
        cin>>ch[i+1];
        i++;
    }

    if(fileTest.is_open()){
        i=0;
        while(ch[i]!='@'){
        fileTest<<ch[i];
        i++;
        }
        cout<<endl<<"success to write in file";
    fileTest.close();
    }else{
        cout<<"Unable to create file";
    }


return 0;
}