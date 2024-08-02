#include <iostream>
#include "List.h"

int main() {
    List list;

    try {
        list.insertElement(1, 10);
        list.insertElement(2, 20);
        list.insertElement(3, 30);

        int valor = list.getElement(2);
        std::cout << "Elemento que está na posição 2: " << valor << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}