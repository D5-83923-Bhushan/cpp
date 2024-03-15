#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
    int id;
    string title;
    double price;

public:
    Product(int id, const string& title, double price) : id(id), title(title), price(price) {}

    virtual double getDiscount() const { return 0.0; } // Base discount (can be overridden)

    virtual void displayInfo() const {
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
    }
};

class Book : public Product {
private:
    string author;

public:
    Book(int id, const string& title, const string& author, double price) :
        Product(id, title, price), author(author) {}

    double getDiscount() const override { return 0.1; } // 10% discount on books

    void displayInfo() const override {
        Product::displayInfo();
        cout << "Author: " << author << endl;
    }
};

class Tape : public Product {
private:
    string artist;

public:
    Tape(int id, const string& title, const string& artist, double price) :
        Product(id, title, price), artist(artist) {}

    double getDiscount() const override { 
        return 0.05; } 

    void displayInfo() const override {
        Product::displayInfo();
        cout << "Artist: " << artist << endl;
    }
};

int main() {
    const int numProducts = 3;
    Product* products[numProducts];

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Book\n";
        cout << "2. Add Tape\n";
        cout << "3. Calculate Final Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id, price;
                string title, author;
                cout << "Enter book details:\n";
                cout << "ID: ";
                cin >> id;
                cout << "Title: ";
                cin>>title;
                cout << "Author: ";
                cin>>author;
                cout << "Price: ";
                cin >> price;
                products[choice - 1] = new Book(id, title, author, price);
                break;
            }
            case 2: {
                int id, price;
                string title, artist;
                cout << "Enter tape details:\n";
                cout << "ID: ";
                cin >> id;
                cout << "Title: ";
               
              
                cout << "Artist: ";
                
                cout << "Price: ";
                cin >> price;
                products[choice - 1] = new Tape(id, title, artist, price);
                break;
            }
            case 3: {
                double total = 0.0;
                for (int i = 0; i < numProducts; i++)
                 {
                    if (products[i] != nullptr) 
                    {
                        double discount = products[i]->getDiscount();
                        double finalPrice = products[i]->price * (1 - discount);
                        cout << "\nProduct " << (i + 1) << ":\n";
                        products[i]->displayInfo();
                        cout << "Price:" << products[i]->price << endl;
                        cout << "Discount: " << discount * 100 << "%" << endl;
                        cout << "Final Price:" << finalPrice << endl;
                        total += finalPrice;
                    }
                }
                cout << "\nTotal Bill:" << total << endl;
                break;
            }
        }
    } while (choice != 4);

    for (int i = 0; i < numProducts; ++i) {
        if (products[i] != nullptr) {
            delete products[i];
        }
    }

    return 0;
}
