#include "Table.hpp"


size_t Table::hash_function(void *key, size_t keySize){
    unsigned int hash = sizeof(key);
    const unsigned char *p = (const unsigned char *)key;

    while (*p != '\0') {
        hash = ((hash << keySize) + hash) + (*p);
        p++;
    }

    return hash % keySize;
}

// unsigned int Table::getHash(const void *obj, int bucket_cnt){
//     unsigned int hash = sizeof(obj);
//     const unsigned char *p = (const unsigned char *)obj;
//     while (*p != '\0') {
//         hash = ((hash << 5) + hash) + (*p); /* hash * 33 + *p */
//         p++;
//     }
//     return hash % bucket_cnt;
// }