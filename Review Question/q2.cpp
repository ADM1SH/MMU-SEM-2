#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int numOfPages;

public:

    void setTitle(const string& t);
    void setAuthor(const string& a);
    void setNumOfPages(int n);

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getNumOfPages() const { return numOfPages; }

    void displayBookInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Number of Pages: " << numOfPages << endl;
    }
};

void Book::setTitle(const string& t) {
    title = t;
}

void Book::setAuthor(const string& a) {
    author = a;
}

void Book::setNumOfPages(int n) {
    numOfPages = n;
}

int main() {
    Book myBook;

    myBook.setTitle("Goodnight Kiss");
    myBook.setAuthor("Margaret Wise Brown");
    myBook.setNumOfPages(20);

    myBook.displayBookInfo();

    return 0;
}
