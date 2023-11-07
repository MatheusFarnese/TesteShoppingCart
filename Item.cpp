#include <iostream>
#include <string>
using namespace std;

class Item {
    private:
        string name;
        double price;
    public:
        Item(string name, double price) {
            this->name = name;
            this->price = price;
        }

        string getName() {
            return name;
        }

        double getPrice() {
            return price;
        }
        friend class ShoppingCart;
};
