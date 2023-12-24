/** This class will be used for the details of Book derived from Author, publicly
**/
using namespace std;
class Book:public Author{
private:
    int bookID;
    string title;
    double price;
public:
    ///constructors
    Book(){
    ///do nothing
    }
    Book(int authorID, string fullName,string email , int bookID, string title, double price){
     ///call the constructor for parent class
     Author(authorID, fullName, email);
     this->bookID = bookID;
     this->title = title;
     this->price = price;
    }
    ///setters and getters here
    void setBookID(int bookID){
    this->bookID = bookID;
    }
    void setTitle(string title){
    this->title = title;
    }
    void setPrice(double price){
    this->price = price;
    }
    ///getters
    int getBookID(){
    return this->bookID;
    }
    string getTitle(){
    return this->title;
    }
    double getPrice(){
    return this->price;
    }
void readData(int id, string name){
setAuthorID(id);
setFullName(name);
}
    void displayData(){
    cout<<"AuthorID = "<<getAuthorID()<<endl;
    cout<<"FullName  = "<<getFullName()<<endl;
    cout<<"Book Title = "<<getTitle()<<endl;
    }
};
