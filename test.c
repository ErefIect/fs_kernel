#include <stdio.h>
#include <string.h>

#include "list.h"

struct my_list {
    void *data;
    struct list_head list;
};


int main(int argc, char const *argv[])
{
    struct my_list l1, l2;
    l1.list.next = &l2.list;
    return 0;
}
