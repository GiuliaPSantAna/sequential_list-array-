#include "List.h"

//Criação de uma lista vazia
List::List() : size(0) {}

// Faz a verificação se a lista está vazia
bool List::isEmpty() const {
    return tamanho == 0;
}

// Faz a verificação se a lista está cheia
bool List::isFull() const {
    return tamanho == MAX_SIZE;
}

// Faz o retorno do tamanho da lista
int List::getSize() const {
    return tamanho;
}

// Consegue o valor de um elemento na posição dada (1-posição)
int List::getElement(int posicao) const {
    if (posicao < 1 || posicao > tamanho) {
        throw std::out_of_range("Posição inserida não é válida");
    }
    return data[posicao - 1];
}

// Faz a mpdificação do valor de um elemento na posição dada (1-posição)
void List::setElement(int posicao, int valor) {
    if (posicao < 1 || posicao > tamanho) {
        throw std::out_of_range("Posição inválida");
    }
    data[posicao - 1] = valor;
}

// Faz a inserção de um elemento na posição dada (1-posição)
void List::insertElement(int posicao, int valor) {
    if (posicao < 1 || posicao > tamanho + 1 || isFull()) {
        throw std::out_of_range("Posição inserida é inválida ou lista está cheia");
    }
    for (int i = tamanho; i >= posicao; i--) {
        data[i] = data[i - 1];
    }
    data[posicao - 1] = valor;
    tamanho++;
}

// Realiza a remoção de um elemento da posição dada (1-posicao)
int List::removeElement(int posicao) {
    if (posicao < 1 || posicao > tamanho) {
        throw std::out_of_range("Posição inserida não é válida");
    }
    int valor = data[posicao - 1];
    for (int i = posicao; i < tamanho; i++) {
        data[i - 1] = data[i];
    }
    size--;
    return valor;
}