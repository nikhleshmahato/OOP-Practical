#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    int stock;
    float price;
public:
    void addProduct() {
        cout << "Enter Product ID, Name, Stock, Price: ";
        cin >> id >> name >> stock >> price;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Stock: " << stock << ", Price: " << price << endl;
    }

    void updateStock(int qty) {
        stock += qty;
        cout << "Stock updated. New Stock: " << stock << endl;
    }
};

int main() {
    Product p;
    p.addProduct();
    p.display();
    p.updateStock(10);
    p.display();
    return 0;
}
