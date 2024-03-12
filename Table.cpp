#include "Table.h"


size_t Table::hash_function(void *key, size_t keySize){
    return GroupContainer::hash_function(key, keySize);
}