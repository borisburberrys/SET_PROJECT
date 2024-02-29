#include "Table.hpp"

unsigned int Table::getHash(const void *obj, int bucket_cnt){
    unsigned int hash = sizeof(obj);
    const unsigned char *p = (const unsigned char *)obj;

    while (*p != '\0') {
        hash = ((hash << 5) + hash) + (*p); /* hash * 33 + *p */
        p++;
    }

    return hash % bucket_cnt;
}