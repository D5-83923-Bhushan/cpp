#include <iostream>

using namespace std;

class Product {
protected:
    int id;
    string title;
    double price;

public:
    Product(int id, const string& title, double price) : id(id), title(title), price(price) 
    {

    }

    virtual double getDiscount() const { return 0.0; } 

    virtual void displayInfo() const 
    {
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
    }
};

class Book : public Product 
{
private:
    string author;

public:
    Book(int id, const string& title, const string& author, double price) :
        Product(id, title, price), author(author) 
        {}

    double getDiscount() const override { return 0.1; } // 10% discount

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

    double getDiscount() const override { return 0.05; } // 5% discount

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
        cout << "3. Calculate Bill\n";
        cout << "0. Exit\n";
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
                cin.ignore(); // Clear input buffer
                getline(cin, title);
                cout << "Author: ";
                getline(cin, author);
                cout << "Price: ";
                cin >> price;

                products[numProducts - 1] = new Book(id, title, author, price);
                break;
            }
            case 2: {
                int id, price;
                string title, artist;
                cout << "Enter tape details:\n";
                cout << "ID: ";
                cin >> id;
                cout << "Title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Artist: ";
                getline(cin, artist);
                cout << "Price: ";
                cin >> price;

                products[numProducts - 1] = new Tape(id, title, artist, price);
                break;
            }
            case 3: {
                double totalBill = 0.0;
                for (int i = 0; i < numProducts; ++i) {
                    if (products[i] != nullptr) { // Check if product is not null
                        products[i]->displayInfo();
                        double discount = products[i]->getDiscount();
                        double discountedPrice = products[i]->price * (1 - discount);
                        cout << "Discounted Price: " << discountedPrice << endl;
                        totalBill += discountedPrice;
                    }
                }
                cout << "Total Bill: " << totalBill << endl;
                break;
            }
        }
    } while (choice != 0);

    // Deallocate memory to prevent leakage
    for (int i = 0; i < numProducts; ++i) {
        if (products[i] != nullptr) {
            delete products[i];
            products[i] = nullptr;
        }
    }

    return 0;
}
