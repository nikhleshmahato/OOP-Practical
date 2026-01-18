#include <iostream>
using namespace std;

class Item {
public:
    string name;
    float price;
    void setItem(string n, float p) {
        name = n; price = p;
    }
};

class Cart {
    Item items[10];
    int count;
public:
    Cart() { count = 0; }

    void addItem(string n, float p) {
        if(count < 10) {
            items[count].setItem(n, p);
            count++;
            cout << n << " added to cart." << endl;
        } else {
            cout << "Cart is full" << endl;
        }
    }

    void totalBill() {
        float total = 0;
        for(int i=0; i<count; i++) {
            total += items[i].price;
        }
        cout << "Total Bill: " << total << endl;
    }
};

int main() {
    Cart c;
    c.addItem("Laptop", 50000);
    c.addItem("Mouse", 500);
    c.addItem("Keyboard", 1000);
    c.totalBill();
    return 0;
}
