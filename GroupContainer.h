#pragma once
#include "Container.h"

// Базовый класс для некоторой группы абстрактных контейнеров
class GroupContainer: public Container
{
public:
    GroupContainer(MemoryManager &mem): Container(mem) {}

    /* Group functions */

    /* function generating hash value for any obj
    returns hash value or NULL */ 
    size_t hash_function(void *key, size_t keySize);

    virtual void *getKey(Iterator *iterator) = 0;
    // rehashing(iterator, getkey, rehashing, ...)
};

size_t GroupContainer::hash_function(void *key, size_t keySize){
    if(key == NULL){
        return NULL;
    }
    unsigned int hash = keySize;
    const unsigned char *p = (const unsigned char *)key;

    while (*p != '\0') {
        hash = ((hash << keySize) + hash) + (*p);
        p++;
    }

    return hash;
}
