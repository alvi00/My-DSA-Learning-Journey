#include <iostream>
#include"header.h"

int main()
{
    linked_list l1;
    l1.insert_at_begin(10);
    l1.insert_at_end(20);
    l1.insert_at_end(40);
    l1.insert_at_end(50);
    l1.insert_at_pos(3,30);
    l1.insert_at_end(60);
    l1.insert_at_end(70);
    l1.insert_at_end(80);
    l1.delete_at_begin();
    l1.delete_at_pos(3);
    l1.delete_at_end();
    l1.insert(40);
    l1.delete_num(30);
    l1.display();
    return 0;
}
