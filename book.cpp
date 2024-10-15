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

      void updateDetails(string n, string g, string a, float p, int page)
    {
        name = n;
        genre = g;
        author = a;
        price = p;
        pages = page;
    }

    void applyDiscount(float discountPercentage)
    {
        price =price- (price * (discountPercentage / 100));
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
         case 2:
        {
            book.display();
            break;
        }
        case 3: 
            {
            float discountPercentage;
            cout << "Enter discount percentage: ";
            cin >> discountPercentage;
            book.applyDiscount(discountPercentage);
            cout << "Discount applied successfully." << endl;
            break;
        }
        case 4:
            {
            string name, genre, author;
            float price;
            int pages;

            cout << "Update Book Details" << endl;
            cout << "Enter new book name: ";
            cin >> name;
            cout << "Enter new genre: ";
            cin >> genre;
            cout << "Enter new author: ";
            cin >> author;

            
            do {
                cout << "Enter price (greater than equal 0): ";
                cin >> price;
            } while (price <= 0);
            do
            {
                cout << "Enter new number of pages (greater than 0): ";
                cin >> pages;
            } while (pages < 1);

            book.updateDetails(name, genre, author, price, pages);
            cout << "Book details updated successfully." << endl;
            break;
        }
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        
        if (choice != 5) 
        {
            cout << "Do you want to continue? (y/n): ";
            cin >> continueChoice;
        }



          } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}