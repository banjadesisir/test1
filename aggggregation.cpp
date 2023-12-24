#include<iostream>
using namespace std;

    class Ruler{
public:
    void ruler(){
    cout<<"i am ruler"<<endl;
    }
    void showdata(){
    cout<<"helooooo";}
    };
    class Pen{
public:
    Ruler r1;
    void pen(){
    cout<<"i am pen"<<endl;
    }
    };
    int main(){
    Pen p;
    p.r1.showdata();
    return 0;
    }

