using namespace std;
class TextBookk{
int bookId;
string title;
double price;
public:
    TextBookk(){
    bookId=101;
    title="computer";
    price=999;
    }
    TextBookk(int bookId,string title,double price){
    this->bookId=bookId;
    this->title=title;
    this->price=price;
    }
    void setBookId(int bookId,string title,double price){
    this->bookId=bookId;
    }
    void setTitle(int bookId,string title,double price){
        this->bookId;
    }
    void setPrice(int bookId,string title,double price){
    this->price=price;
    }
int getBookid(){
return bookId;
}
string getTitle(){
return title;
}
double getPrice(){
return price;
}

};
