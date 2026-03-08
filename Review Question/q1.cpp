#include <iostream>
using namespace std;

class book {
	private:
        string title, author;
        int pages;
    public:
       void setTitle(const string& t) { title = t; }
       void setAuthor(const string& a) { author = a; }
       void setNumOfPages(int n) { pages = n; }

       string getTitle() const {return title;}
       string getAuthor() const {return author;}
       int getNumOfPages() const {return pages;}

       void displayBookInfo(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Number Of Pages: " << pages << endl;
       }
        
};

int main(){
    book myBook;

    myBook.setTitle("Goodnight Kiss");
    myBook.setAuthor("Margret Wise Brown");
    myBook.setNumOfPages(20);

    myBook.displayBookInfo();

    return 0;
}