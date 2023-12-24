/**
This file will hold the details of all the author
**/
using namespace std;
class Author{
private:
    int authorID;
    string fullName;
    string email;
public:
    ///constructor
    Author(){
    /// do nothing
    }
    ///parametrized constructor
    Author( int authorID, string fullName,string email ){
    this->authorID = authorID;
    this->fullName = fullName;
    this->email = email;
    }
    ///getters and setters
    void setAuthorID(int authorID){
    this->authorID = authorID;
    }
    protected:
    void setFullName(string fullName){
    this->fullName = fullName;
    }
    public:
    void setEmail(string email){
    this->email = email;
    }
    ///getters
    int getAuthorID(){
    return this->authorID;
    }
    string getFullName(){
    return this->fullName;
    }
    string getEmail(){
    return this->email;
    }


};
