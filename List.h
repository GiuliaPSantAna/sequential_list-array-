#ifndef LIST_H
#define LIST_H

#include <stdexcept>

const int MAX_SIZE = 100;

class List {
private:
    int data[MAX_SIZE];
    int tamanho;

public:
    //Criação de uma lista vazia
    List();

    //Faz a verificação se a lista está vazia
    bool isEmpty() const;

    //Faz a verificação se a lista está cheia
    bool isFull() const;

    //Realiza o retorno do tamanho da lista
    int getSize() const;

    //Consegue o valor de um elemento na posição dada (1-posição)
    int getElement(int posicao) const;

    //Faz a modificação do valor de um elemento na posição dada (1-posição)
    void setElement(int posicao, int valor);

    //Faz a inserção de um elemento na posição dada (1-posição)
    void insertElement(int posicao, int valor);

    //Faz a remoção de um elemento da posição dada (1-posição)
    int removeElement(int posicao);
};

#endif // LIST_H