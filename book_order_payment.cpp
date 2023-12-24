#include<iostream>
#include<iomanip>
using namespace std;
typedef struct Date{
int year;
int month;
int day;
}date;
class Book{
private:
    int bookID;
    string title;
    double price;
public:
    Book();
    Book(int bookID, string title, double price);

    void setBookID(int bookID);
    void setTitle(string title);
    void setPrice(double price);

    int getBookID();
    string getTitle();
    double getPrice();
};
class Order{
private:
    int orderID;
    date orderedDate;
    double totalAmount;
public:
    Order();
    Order(int orderID, date orderedDate, double totalAmount);

    void setOrderID(int orderID);
    void setOrderedDate(date orderedDate);
    void setTotalAmount(double totalAmount);

    int getOrderID();
    date getOrderedDate();
    double getTotalAmount();

    void orderList(Book *b,int size);
};
class Payment{
private:
    int paymentID;
    date paidDate;
    double totalAmount;
    Order o;
public:
    Payment();
    Payment(int paymentID, date paidDate, double totalAmount, Order o);

    void setPaymentID(int paymentID);
    void setPaidDate(date paidDate);
    void setTotalAmount(double totalAmount);
    void setO(Order *o);

    int getPaymentID();
    date getPaidDate();
    double getTotalAmount();
    Order getO();

    double calculateTotalSales();
};
int main(){
Book *b;
Order *o;
Payment *p;
int size,i,orderqty,j;
date od;
int bID;
string bTitle;
double bPrice;
int oID;
double tAmount = 0;
double sales;
char s;
int pID;
date pd;
char ss;
cout<<endl<<"How many order are there: ";
cin>>orderqty;
o = new Order[orderqty];

for(i=0;i<orderqty;i++){
cout<<endl<<"Enter the  order ID "<<i+1<<": ";
cin>>oID;
(o+i)->setOrderID(oID);

cout<<endl<<"Enter ordered date (year/month/day): ";
cin>>od.year>>s>>od.month>>s>>od.day;
(o+i)->setOrderedDate(od);

cout<<endl<<"Enter the no. of books you want to enter for order "<<(o+i)->getOrderID()<<": ";
cin>>size;

b = new Book[size];

for(j=0;j<size;j++){
cout<<endl<<"Enter Book ID: ";
cin>>bID;
fflush(stdin);
cout<<"Enter Book Title: ";
getline(cin,bTitle);
cout<<"Enter Book Price: ";
cin>>bPrice;

(b+j)->setBookID(bID);
(b+j)->setTitle(bTitle);
(b+j)->setPrice(bPrice);
 tAmount += (b+j)->getPrice();
}
(o+i)->setTotalAmount(tAmount);

p = new Payment[orderqty];
cout<<endl<<endl<<"Enter the Payment ID: ";
cin>>pID;

cout<<"Enter the Payment Date: ";
cin>>pd.year>>ss>>pd.month>>ss>>pd.day;
(p+i)->setPaidDate(pd);
(p+i)->setPaymentID(pID);
(p+i)->setO(&o[i]);
(p+i)->setTotalAmount((o+i)->getTotalAmount());

    sales += (p+i)->calculateTotalSales();

    (o+i)->orderList(&b[0],size);

cout<<endl<<endl<<"Payment done for order "<<(p+i)->getO().getOrderID();
cout<<endl<<"Order Placed in "<<(p+i)->getO().getOrderedDate().year<<"/"<<(p+i)->getO().getOrderedDate().month<<"/"<<(p+i)->getO().getOrderedDate().day;
cout<<endl<<"Payment ID: "<<(p+i)->getPaymentID();
cout<<endl<<"Payment Date: "<<(p+i)->getPaidDate().year<<"/"<<(p+i)->getPaidDate().month<<"/"<<(p+i)->getPaidDate().day;
cout<<endl<<"Payment Done: "<<(p+i)->getTotalAmount()<<endl<<endl;

}
cout<<endl<<"The total Sales made from all orders is "<<sales<<endl;
return 0;
}

Book::Book(){
bookID = 188;
title = "IIT";
price = 987.55;
}

Book::Book(int bookID, string title, double price){
this->bookID = bookID;
this->title = title;
this->price = price;
}

void Book::setBookID(int bookID){
this->bookID = bookID;
}

void Book::setTitle(string title){
this->title = title;
}

void Book::setPrice(double price){
this->price = price;
}

int Book::getBookID(){
return bookID;
}

string Book::getTitle(){
return title;
}

double Book::getPrice(){
return price;
}

Order::Order(){
orderID = 0;
orderedDate = {2007,12,22};
totalAmount = 0;
}

Order::Order(int orderID, date orderedDate, double totalAmount){
this->orderID = orderID;
this->orderedDate = orderedDate;
this->totalAmount = totalAmount;
}

void Order::setOrderID(int orderID){
this->orderID = orderID;
}

void Order::setOrderedDate(date orderedDate){
this->orderedDate.year = orderedDate.year;
this->orderedDate.month = orderedDate.month;
this->orderedDate.day = orderedDate.day;
}

void Order::setTotalAmount(double totalAmount){
this->totalAmount = totalAmount;
}

int Order::getOrderID(){
return orderID;
}

date Order::getOrderedDate(){
return orderedDate;
}


double Order::getTotalAmount(){
return totalAmount;
}

void Order::orderList(Book *b,int size){
int i;
cout<<endl<<"-------------------------------------------------------------------------------------------";
cout<<endl<<"Displaying Order List: ";
cout<<endl<<"Order ID: "<<getOrderID();
cout<<endl<<"Ordered Date: "<<getOrderedDate().year<<"/"<<getOrderedDate().month<<"/"<<getOrderedDate().day;
cout<<endl<<"Order Total Amount: "<<totalAmount;
for(i=0;i<size;i++){
        cout<<endl<<endl<<"Details of "<<i+1<<" Book: "<<endl;
    cout<<endl<<"Book ID : "<<(b+i)->getBookID();
    cout<<endl<<"Book Title: "<<(b+i)->getTitle();
    cout<<endl<<"Book Price: "<<(b+i)->getPrice();
}
}
Payment::Payment(){
paymentID = 11745;
paidDate = {2023,10,22};
totalAmount = 0;
o = o;
}

Payment::Payment(int paymentID, date paidDate, double totalAmount, Order o){
this->paymentID = paymentID;
this->paidDate = paidDate;
this->totalAmount = totalAmount;
this->o = o;
}

void Payment::setPaymentID(int paymentID){
this->paymentID = paymentID;;
}

void Payment::setPaidDate(date paidDate){
this->paidDate.year = paidDate.year;
this->paidDate.month = paidDate.month;
this->paidDate.day = paidDate.day;
}

void Payment::setTotalAmount(double totalAmount){
this->totalAmount = totalAmount;
}

void Payment::setO(Order *o){
this->o = *o;
}

int Payment::getPaymentID(){
return paymentID;
}

date Payment::getPaidDate(){
return paidDate;
}


double Payment::getTotalAmount(){
return totalAmount;
}

Order Payment::getO(){
return o;
}

double Payment::calculateTotalSales(){
double sales;
sales = getO().getTotalAmount();
return sales;
}
