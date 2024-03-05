#include <iostream>
#include <map>
#include <vector>

#include "Table.hpp"

using namespace std;

unsigned int getHash(const void *obj, int bucket_cnt){
    unsigned int hash = 0;
    const unsigned char *p = (const unsigned char *)obj;

    while (*p != '\0') {
        hash = ((hash << bucket_cnt) + hash) + (*p);
        p++;
    }

    return hash % bucket_cnt ;
}

std::map<int, int> countNumbers(const std::vector<int>& numbers) {
    std::map<int, int> counts;
    for (int num : numbers) {
        counts[num]++;
    }
    return counts;
}

void printCounts(const std::map<int, int>& counts) {
    for (const auto& pair : counts) {
        std::cout << pair.first << " - " << pair.second << std::endl;
    }
}

int main(){
    int a = 5, b = 6;

    vector<int> collision_count;
    std::map<int, int> unique_collision;

    Table *t = new Table(), *v = new Table(), *z = new Table();

    Table **tt = new Table*[__INT32_MAX__];
    for(size_t i = 0; i < __INT32_MAX__; ++i){
        tt[i] = new Table();
        unsigned int save_hash = getHash(&tt[i], __INT32_MAX__);
        collision_count.push_back(save_hash);
    }

    unique_collision = countNumbers(collision_count);
    
    return 0;
}
