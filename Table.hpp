typedef class Table Table;

class Table
{
    private:
        void *obj;
        unsigned int obj_byte_size;
        unsigned int hash_val;

        class error
        {
            private:
                char errMsg[100];
            public:
                error(/* args */);
                ~error();
        };
        
    public:
        unsigned int getHash(const void *obj, int bucket_cnt);
};