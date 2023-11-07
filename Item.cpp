/**
* Engenharia de Software Moderna - Testes  (Cap. 8)
* Prof. Marco Tulio Valente
* 
* Exemplo simples de teste (ShoppingCart)
*
*/

/* Itens que serão armazenados no carrinho de compras */

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
