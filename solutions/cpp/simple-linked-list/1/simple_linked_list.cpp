#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    return current_size;
}

void List::push(int entry) {
    Element* novoNo = new Element(entry);
    novoNo->next = head;
    head = novoNo;
    current_size++;
}

int List::pop() {
    if (head == nullptr) {
        throw std::domain_error("Lista vazia");
    }

    Element* noRemovido = head;
    int valorNoRemovido = noRemovido->data;
    head = head->next;
    delete noRemovido;
    current_size--;

    return valorNoRemovido;
}

void List::reverse() {
    Element* prev = nullptr;
    Element* current = head;
    
    while (current != nullptr) {
        Element* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    head = prev;
}

List::~List() {
    while (head != nullptr) {
        pop();
    }
}

}
