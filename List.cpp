#include "List.h"

int List::push_front(void *elem, size_t elemSize) {
    this->l.push_front(elem);
    return 1;
}

void List::pop_front(){
    this->l.pop_front();
}

void* List::front(size_t &size){
    return this->l.front();
}

// задать итератор перед вызовом метода (должен main!!!)
int List::insert(Iterator *iter, void *elem){
    this->l.insert(iter->list_it, elem);
    return 1;
}
