#include "TableAbstract.h"


typedef class Table Table;

class Table : AbstractTable
{
    private:
        // void *obj;
        // unsigned int obj_byte_size;
        // unsigned int hash_val;

        class error
        {
            private:
                char errMsg[100];
            public:
                error(/* args */);
                ~error();
        };
        
    public:
        size_t hash_function(void *key, size_t keySize) override;

};