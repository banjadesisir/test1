#include<iostream>
#include<iomanip>
using namespace std;
class Painting;

class Artist{
private:
    string artistName;
public:
    Artist();  //default constructor
    Artist(string artistName);  //parametrized constructor

    void setArtistName(string artistName); //setters
    string getArtistName(); //getters

    void draws(Painting *p1,int size);
};

class Painting{
private:
    string paintingName;
public:
    Painting();
    Painting(string paintingName);

    void setPaintingName(string paintingName);
    string getPaintingName();
};
int main(){
    Artist a1;
    Painting p1[5];
    string paintName;
    int i;
    for(i=0;i<5;i++){
    cout<<endl<<"Enter the name of Painting "<<i+1<<": ";
    getline(cin,paintName);
    p1[i].setPaintingName(paintName);
    }

    cout<<endl<<"Name of the Artist: "<<a1.getArtistName();
    cout<<endl<<"Paintings painted by "<<a1.getArtistName()<<" are:";
    a1.draws(&p1[0],5);
return 0;
}

void Artist::draws(Painting *p1,int size){
int i;
for(i=0;i<size;i++){
    cout<<endl<<i+1<<". "<<(p1+i)->getPaintingName();
}
}

Artist::Artist(){
artistName = "Leonardo Da Vinci";
}

Artist::Artist(string artistName){
this->artistName = artistName;
}

void Artist::setArtistName(string artistName){
this->artistName = artistName;
}

string Artist::getArtistName(){
return artistName;
}

Painting::Painting(){
paintingName = "Nepal";
}

Painting::Painting(string paintingName){
this->paintingName = paintingName;
}

void Painting::setPaintingName(string paintingName){
this->paintingName = paintingName;
}

string Painting::getPaintingName(){
return paintingName;
}
