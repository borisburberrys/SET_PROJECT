#include "Set.h"
#include "Table.hpp"

Set::Set(MemoryManager &mem): AbstractSet(mem)
{
    set_size = 100000;

    set_data = (list<void*>**)_memory.allocMem(sizeof(list<void*>*) * set_size);
}

void* Set::SetIterator::getElement(size_t &size) 
{
    
   

    return nullptr; 
}





Set::~Set()
{

}





int Set::insert(void *elem, size_t size)
{

    //Table::hash_function(elem)
}