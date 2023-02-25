

class Friend2
{
    private:
    int data;

    public:
    Friend2() : data(18) {}

    friend int friend_func(Friend1, Friend2);
};