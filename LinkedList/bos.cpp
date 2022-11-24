#include <iostream>

using namespace std;

class bos
{
private:
    /* data */
    string name;
    bos *next;

public:
    bos(string name);
    ~bos();
};

bos::bos(string name)
{
    this->name = name;
}

bos::~bos()
{
    cout << this->name << " is deleted" << endl;
    delete this->next;
}

int main(int argc, char const *argv[])
{
    bos *x = new bos("1");
    bos *y = new bos("2");
    bos *z = new bos("3");
    bos *d = new bos("4");

    delete x;
    return 0;
}
