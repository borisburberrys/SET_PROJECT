#pragma once
#include "SetAbstract.h"
#include <list>

using namespace std;

class Set : public AbstractSet
{
private:
    list <void*>** set_data;
    int set_size = 0;
    //size_t bucket_size = 0;
    //Set* buckets_array;

public:
    Set(MemoryManager &mem): AbstractSet(mem) {}

    ~Set() {}

    int insert(void* elem, size_t size);

    class SetIterator
    {
    public:
        virtual void* getElement(size_t &size) = 0;

        virtual bool hasNext() = 0;

        virtual void goToNext() = 0;

        virtual bool equals(SetIterator *right) = 0;
    };

    virtual int size() override;

    virtual size_t max_bytes() override;

    virtual Iterator* find(void *elem, size_t size) override;

    virtual Iterator* newIterator() override;

    virtual void remove(Iterator *iter) override;

    virtual void clear() override;

    virtual bool empty() override;

};