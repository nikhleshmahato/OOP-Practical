#include <iostream>
using namespace std;

class Item {
    string name;
    int qty;
    float rate;
    float amount;
public:
    void getItem() {
        cout << "Enter Item Name, Qty, Rate: ";
        cin >> name >> qty >> rate;
        amount = qty * rate;
    }

    float getAmount() { return amount; }

    void showItem() {
        cout << name << "\t" << qty << "\t" << rate << "\t" << amount << endl;
    }
};

int main() {
    Item items[3];
    float total = 0;

    for(int i=0; i<3; i++) {
        items[i].getItem();
        total += items[i].getAmount();
    }

    cout << "\nBill Summary:" << endl;
    cout << "Item\tQty\tRate\tTotal" << endl;
    for(int i=0; i<3; i++) items[i].showItem();

    cout << "------------------------------" << endl;
    cout << "Grand Total: " << total << endl;
    return 0;
}
