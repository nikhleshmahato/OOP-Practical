#include <iostream>
using namespace std;

class Book {
    int bookId;
    string title;
    string author;
    float price;
public:
    void accpetBook() {
        cout << "Enter Book ID, Title, Author, Price: ";
        cin >> bookId >> title >> author >> price;
    }

    void displayBook() {
        cout << bookId << "\t" << title << "\t" << author << "\t" << price << endl;
    }
};

int main() {
    Book b[3];
    int i;

    cout << "Enter details for 3 books:" << endl;
    for(i=0; i<3; i++) b[i].accpetBook();

    cout << "\nLibrary Books Details:" << endl;
    cout << "ID\tTitle\tAuthor\tPrice" << endl;
    for(i=0; i<3; i++) b[i].displayBook();

    return 0;
}
