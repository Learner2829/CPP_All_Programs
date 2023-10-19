#include <iostream>
#include <string>

using namespace std; // Add this line to avoid using std:: prefix

class Item {
public:
    string itemName;
    float itemPrice;

    Item(const string& name, float price) : itemName(name), itemPrice(price) {}
};

class Supplier {
private:
    string supplierName;
    string supplierAddress;
    string supplierContact;
    Item* itemList;
    int itemCount;

public:
    Supplier(const string& name, const string& address, const string& contact, int initialCapacity)
        : supplierName(name), supplierAddress(address), supplierContact(contact), itemList(new Item[initialCapacity]), itemCount(0) {}

    ~Supplier() {
        delete[] itemList;
    }

    void addItem(const string& name, float price) {
        if (itemCount < initialCapacity) {
            itemList[itemCount++] = Item(name, price);
        } else {
            cout << "Item list is full. Cannot add more items." << endl;
        }
    }
};

int main() {
    Supplier supplier("ABC Suppliers", "123 Main St", "contact@abc.com", 10);

    supplier.addItem("Widget", 10.99);
    supplier.addItem("Gadget", 19.99);

    // Access and display supplier details and items
    // ...

    return 0;
}

