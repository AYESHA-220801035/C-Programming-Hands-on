#include <iostream>
using namespace std;
class Book
{
private:
    string isbn;
    string title;
    string author;
public:
    void setISBN(string i)
    {
        isbn = i;
    }
    void setTitle(string t)
    {
        title = t;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    void updateTitle(const string &newTitle)
    {
        title = newTitle;
    }
    void print()
    {
        cout << "ISBN: " << isbn << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};
int main()
{
    Book b1;   
    b1.setISBN("978-12345");
    b1.setTitle("C++ Programming");
    b1.setAuthor("Bjarne");
    cout << "Original Book Details:\n";
    b1.print();
    b1.updateTitle("Advanced C++ Programming");
    cout << "\nAfter Updating Title:\n";
    b1.print();
    return 0;
}