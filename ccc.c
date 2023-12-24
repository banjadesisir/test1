#include<iostream>
#include<iomanip>
using namespace std;
struct Book{
int bookid;
string title;
double cost;
};
static int i;
void readbook(struct Book *b,int size);
void displaybook(struct Book *b,int size);
void raisePrice(struct Book *b,int size,int bookID,double newPrice);
int main(){
    struct Book b[3];;
    int bookID;
    double newPrice;
    cout<<endl<<"Reading Informations"<<endl;
    readbook(&b[0],3);
    cout<<endl<<"Displaying Informations"<<endl;
    displaybook(&b[0],3);
    cout<<endl<<"Enter book id whose price is to be raised: ";
    cin>>bookID;
    cout<<endl<<"Enter the price to be raised: ";
    cin>>newPrice;
    raisePrice(&b[0],3,bookID,newPrice);
    cout<<endl<<"Displaying Updated Informations"<<endl;
displaybook(&b[0],3);
return 0;
}
void readbook(struct Book *b,int size){
for(i=0;i<size;i++){
cout<<"Enter bookID["<<i<<"] :";
cin>>(b+i)->bookid;
cout<<"Enter title["<<i<<"] :";
fflush(stdin);
getline(cin,(b+i)->title);
cout<<"Enter price["<<i<<"] :";
cin>>(b+i)->cost;
cout<<endl;
}
}
void displaybook(struct Book *b,int size){
for(i=0;i<size;i++){
cout<<endl<<"Book id["<<i<<"]= "<<(b+i)->bookid<<endl<<"Title["<<i<<"]= "<<(b+i)->title<<endl<<"Price["<<i<<"] = Rs."<<(b+i)->cost<<endl;
}
}
void raisePrice(struct Book *b,int size,int bookID,double newPrice){
int count = 0;
for(i=0;i<size;i++){
if((b+i)->bookid==bookID){
    (b+i)->cost=newPrice;
count++;
}
}
if(count == 1){
          cout<<endl<<"The New Price has been updated of Book ID - "<<bookID<<endl;
}else{
        cout<<endl<<"The Book ID - "<<bookID<<" cannot be found."<<endl;
}
}
