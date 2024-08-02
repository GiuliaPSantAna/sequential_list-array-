#include <iostream>
#include "List.h"

void testeCriarListaVazia() {
    List list;
    if (list.getSize() != 0 || !list.isEmpty()) {
        throw std::runtime_error("Falha ao criar lista vazia.");
    }
}

void testeInserirElemento() {
    List list;
    list.insertElement(1, 10);
    if (list.getSize() != 1 || list.getElement(1) != 10) {
        throw std::runtime_error("Falha ao inserir elemento.");
    }
}

void testeRemoverElemento() {
    List list;
    list.insertElement(1, 10);
    list.insertElement(2, 20);
    list.insertElement(3, 30);

    int valor = list.removeElement(2);
    if (valor != 20 || list.getSize() != 2) {
        throw std::runtime_error("Falha ao remover elemento.");
    }

    if (list.getElement(2) != 30) {
        throw std::runtime_error("Falha na remoção de elemento.");
    }
}

int main() {
    try {
        testeCriarListaVazia();
        testeInserirElemento();
        testeRemoverElemento();

        std::cout << "Passaram todos os testes." << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}