What is a single linked list

It is a a list made up of nodes that consists of 2 parts;
- Data and
- Link


Recall

A self sequential structure is a structure which contains a pointer to a structure of the same tyep, example;

struct abc {
    int a;
    int b;
    struct abc *self;
}
It will be used to create the node of a single linked list