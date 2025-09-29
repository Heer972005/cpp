#include<iostream>
using namespace std;

class Book{
    string title;
    string author;
    int ISBN;
    char status;

    Book(string title,string author,int ISBN,char status){
        this->title = title;
        this->author = author;
        this->ISBN =ISBN;
        this->status = status;
    }

    void setStatus(char s)
    {
        status= s;
    }
    double getStatus()
    {
        return status;
    }
};

class Menmber{
    int memberId;
    string name;
    int borrowedBooks;
};

class Library{
    string books;
    string members;
};