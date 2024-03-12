#include "ListAbstract.h"
#include <list>
using namespace std;

typedef class List List;

class List : AbstractList{
    private:
        list<void*> l;

    public:

        List();
        ~List();
        int push_front(void *elem, size_t elemSize) override;
        void pop_front() override;
        void* front(size_t &size) override;
        int insert(Iterator *iter, void *elem);
};