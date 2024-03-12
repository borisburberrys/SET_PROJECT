#include "TableAbstract.h"
#include "Container.h"

typedef class Table Table;

class Table : AbstractTable
{
    private:
        class error
        {
            private:
                char errMsg[100];
            public:
                error(/* args */);
                ~error();
        };
        
    public:
        // 1 - arr pairs of lists??
        // 2 - arr list pair (4 fields)!
        // 3 - массив наследников(наследник (List) хранит структуру из 4 полей (key, sizeKey, val, sizeVal)) списка
        Table();
        Table(void *key, void *val);
        size_t hash_function(void *key, size_t keySize);
        
};

// class TableList : List (make own fast memory manager)
// class TableIterator : Iterator