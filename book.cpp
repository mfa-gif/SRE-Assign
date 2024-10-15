#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
    string name;
    string genre;
    string author;
    float price;
    int pages;

public:
    
    Book() 
    {
        name = " "; 
        genre = "";
        author = " ";
        price = 0.0;
        pages = 0;
}

    
    Book(string n, string g, string a, float p, int page)
        
        
    { 
        name = n;
        genre=g;
        author = a;
        price = p;
        pages = page; 
    }

};

int main()
{
    Book book; 
    int choice;
    char continueChoice;

    do 
    {
        
        cout << "Menu:" << endl;
        cout << "1. Input Book Details" << endl;
        cout << "2. Display Book" << endl;
        cout << "3. Apply Discount" << endl;
        cout << "4. Update Book Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;



          } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}