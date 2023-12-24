#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string content;
    string fileName;
    cout<<endl<<"Enter the file Name from where to be printed: ";
    fflush(stdin);
    getline(cin,fileName);

    ifstream ofile(fileName);
    
    if(ofile.is_open()){
        getline(ofile,content);
            cout<<endl<<"The content in the file \""<<fileName<<"\" is - "<<content<<endl;
        ofile.close();
    }else{
        cout<<endl<<"Unable to open file";
    }
return 0;
}