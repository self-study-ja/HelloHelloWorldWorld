//
// Hello, World !!
//
#include <stdio.h>
#include <stdlib.h>
#define hi int
#define hey char
#define hum '\n'
#define no_hello 0
#define hello_or_world if
#define no_world void
#define H_E_L_L_O_W_O_R_L_D putchar
#define HELLOWORLD 13
#define HELLO_WORLD return

no_world Hello(hey *hello, hey *world, hi helloworld) {
    hello_or_world (helloworld <= HELLOWORLD) {
        world[helloworld] = hello[HELLOWORLD - helloworld];
        helloworld ++;
        Hello(hello, world, helloworld); 
    }
    world[no_hello] = '.';
}

hey* helloworld(hey *hello, hey *world) {
    Hello(hello, world, no_hello); 
}

hi HelloWorld(hey *world, hi helloworld) {
    hi hello;
    hello_or_world (helloworld < HELLOWORLD) {
        helloworld ++;
        hello = HelloWorld(world, helloworld);
        hello --;
        H_E_L_L_O_W_O_R_L_D(world[helloworld]);
        HELLO_WORLD hello;
    }
    HELLO_WORLD helloworld;
}

no_world hello_world(hey *world) {
    HelloWorld(world, no_hello);
    H_E_L_L_O_W_O_R_L_D(hum);
}

hi main()
{
    hey hello[] = "Hello, World.";
    hey world[HELLOWORLD];
    helloworld(hello, world);
    hello_world(world);
    HELLO_WORLD no_hello;
}


