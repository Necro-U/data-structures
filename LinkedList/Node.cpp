#include <iostream>

using namespace std;

struct Node
{
    string value;
    struct Node *child;
    struct Node *parent;
    /* data */
};

class LinkedList
{
private:
    struct Node *header;

    /* data */
public:
    LinkedList(/* args */);
    ~LinkedList();
};

LinkedList::LinkedList(/* args */)
{
}

LinkedList::~LinkedList()
{
}
