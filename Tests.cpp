#include <assert.h>
#include "ShoppingCart.cpp"

class TestMethods {
    public:
        bool testAddItem() {
            ShoppingCart sc;
            assert(sc.getItemCount() == 0); //Marker: primeiro assert
            
            Item manga1("No game no life", 36);
            sc.addItem(manga1);
            Item manga2("Youjo Senki", 25);
            sc.addItem(manga2);
            
            assert(sc.getItemCount() == 2); //Marker: segundo assert

            Item manga3("Konosuba", 64);
            sc.addItem(manga3);

            assert(sc.getItemCount() == 3); //Marker: terceiro assert

            return true;
        }

        bool testRemoveItem() {
            ShoppingCart sc;
            assert(sc.getItemCount() == 0); //Marker: primeiro assert

            Item manga1("No game no life", 36);
            sc.addItem(manga1);
            Item manga2("Youjo Senki", 25);
            sc.addItem(manga2);
            sc.addItem(manga2);
            Item manga3("Konosuba", 64);
            sc.addItem(manga3);

            assert(sc.getItemCount() == 4); //Marker: segundo assert
            sc.removeItem(manga2);
            assert(sc.getItemCount() == 2); //Marker: terceiro assert

            sc.removeItem(manga2);
            assert(sc.getItemCount() == 2); //Marker: quarto assert

            return true;
        }

        bool testGetTotalPrice() {
            ShoppingCart sc;
            assert(sc.getTotalPrice() == 0); //Marker: primeiro assert

            Item manga1("No game no life", 36);
            sc.addItem(manga1);
            Item manga2("Youjo Senki", 25);
            sc.addItem(manga2);
            sc.addItem(manga2);
            Item manga3("Konosuba", 64);
            sc.addItem(manga3);

            assert(sc.getTotalPrice() == 150); //Marker: segundo assert
            sc.removeItem(manga2);
            assert(sc.getTotalPrice() == 100); //Marker: terceiro assert

            sc.removeItem(manga2);
            assert(sc.getTotalPrice() == 100); //Marker: quarto assert

            return true;
        }

        bool testClearCart() {
            ShoppingCart sc;
            assert(sc.getItemCount() == 0); //Marker: primeiro assert

            Item manga1("No game no life", 36);
            sc.addItem(manga1);
            Item manga2("Youjo Senki", 25);
            sc.addItem(manga2);
            sc.addItem(manga2);
            Item manga3("Konosuba", 64);
            sc.addItem(manga3);

            assert(sc.getItemCount() == 4); //Marker: segundo assert
            sc.clearCart();
            assert(sc.getItemCount() == 0); //Marker: terceiro assert

            return true;
        }
};
