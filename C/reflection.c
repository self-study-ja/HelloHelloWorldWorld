//
// Hello, World !!
//
#include <stdio.h>
#include <stdlib.h>
#define HelloWorld 13

void ref_reverse(char *hello, char *world, int start) {
    if (start <= HelloWorld) {
        world[start] = hello[HelloWorld - start];
        start ++;
        ref_reverse(hello, world, start); 
    }
    world[0] = '.';
}

char* reverse(char *hello, char *world) {
    ref_reverse(hello, world, 0); 
}

int ref_reverse_print(char *world, int start) {
    int point;
    if (start < HelloWorld) {
        start ++;
        point = ref_reverse_print(world, start);
        point --;
        putchar(world[start]);
        return point;
    }
    return start;
}

void reverse_print(char *world) {
    ref_reverse_print(world, 0);
    putchar('\n');
}

int main()
{
    char hello[] = "Hello, World.";
    char world[HelloWorld];
    reverse(hello, world);
    reverse_print(world);
    return 0;
}


