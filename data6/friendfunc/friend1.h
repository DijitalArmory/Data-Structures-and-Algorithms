class Friend2;

class Friend1
{
    private:
    int data;

    public:
    Friend1() : data(7) {}

    friend int friend_func(Friend1, Friend2);
};
