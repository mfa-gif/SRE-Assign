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
    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Pages: " << pages << endl;
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
         switch (choice)
        {
        case 1: 
        {
            string name, genre, author;
            float price;
            int pages;

            cout << "Enter book name: ";
            cin >> name;
            cout << "Enter genre: ";
            cin >> genre;
            cout << "Enter author: ";
            cin >> author;

            
            do 
            {
                cout << "Enter price (greater than equal 0): ";
                cin >> price;
            } while (price <= 0);
          
            do
            {
                cout << "Enter number of pages (greater than 0): ";
                cin >> pages;
            } while (pages < 1 );

           
            Book newBook(name, genre, author, price, pages);
            book = newBook;  
            break;
        }



          } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}