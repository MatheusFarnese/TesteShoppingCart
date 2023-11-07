#include "Tests.cpp"

int main() {
    TestMethods tm;
    if (tm.testAddItem()) {
        cout << "testAddItem realizado com sucesso" << endl;
    }
    if (tm.testRemoveItem()) {
        cout << "testRemoveItem realizado com sucesso" << endl;
    }
    if (tm.testGetTotalPrice()) {
        cout << "testGetTotalPrice realizado com sucesso" << endl;
    }
    if (tm.testClearCart()) {
        cout << "testClearCart realizado com sucesso" << endl;
    }
    return 0;
}
