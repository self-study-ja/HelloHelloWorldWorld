#include <stdio.h>
#include <stdlib.h>
#define HelloWorld 13

struct ListNode
{
    char data;
    struct ListNode *next;
};

struct MetaListData
{
    struct ListNode *first;
};

struct MetaListData* get_singleton()
{
    static struct MetaListData metalist;
    return &metalist;
}

struct ListNode* generate_listnode(char str)
{
    struct ListNode *newnode;
    newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newnode->data = str;
    return newnode;
}

void set_listnode(char *str, struct ListNode *helloworld)
{
    helloworld->data = str[0]; 
    int i;
    for (i = 1; i <= HelloWorld; i++)
    {
        helloworld->next = generate_listnode(str[i]); 
        helloworld = helloworld->next;
    }
}

void init_listnode(struct ListNode *helloworld) {
    struct MetaListData *metalist;
    helloworld->data = ' ';
    metalist = get_singleton();
    metalist->first = helloworld;
    set_listnode("Hello, World.", helloworld);
}

void print_listnode(struct ListNode *car)
{
    struct ListNode *current = car;
    while (current != NULL)
    {
        putchar(current->data);
        current = current->next;
    }
    putchar('\n');
}

int main() 
{
    struct MetaListData *metalist;
    metalist = get_singleton();
    
    struct ListNode *hello; 
    hello = (struct ListNode *)malloc(sizeof(struct ListNode));
    init_listnode(hello);
    
    struct ListNode *world; 
    world = metalist->first;
    print_listnode(world);
    return 0;
};
