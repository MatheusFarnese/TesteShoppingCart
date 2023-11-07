/**
* Engenharia de Software Moderna - Testes  (Cap. 8)
* Prof. Marco Tulio Valente
* 
* Exemplo simples de teste (ShoppingCart)
*
*/

/**
* Classe que será testada
*/

#include <list>
#include "Item.cpp"

class ShoppingCart {
    private:
        std::list<Item> items;
    public:

        bool itemCmp(Item a, Item b) {
            return (a.name == b.name);
        }

        void addItem(Item item) {
            items.push_back(item);
        }

        bool removeItem(Item item) {
            bool flag = false;
            std::list<Item>::iterator it;
            for (it = items.begin(); it != items.end(); it++) {
                if (itemCmp(*it, item)) {
                    flag = true;
                    it = items.erase(it);
                    it--;
                }
            }
            return flag;
        }

        void clearCart() {
            items.clear();
        }

        int getItemCount() {
            return items.size();
        }

        double getTotalPrice() {
            double totalPrice = 0.0;
            std::list<Item>::iterator it;
            for (it = items.begin(); it != items.end(); ++it) {
                totalPrice += (*it).getPrice();
            }
            return totalPrice;
        }

        std::list<Item> getItems() {
            return items;
        }
};
