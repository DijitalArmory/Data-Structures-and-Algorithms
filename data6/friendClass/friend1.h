class Friend2;

class Friend1
{
    private:
    int data1;

    public:
    Friend1() : data1(95) {}
    friend class Friend2;
};