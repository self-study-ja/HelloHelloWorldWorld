#include <stdio.h>
#include <stdlib.h>
#define HELLO_IS_WORLD struct
#define hi int
#define hey char
#define no_hello 0
#define no_world void
#define is_world static
#define no_helloworld NULL
#define hum '\n'
#define world_is_mine malloc
#define HELLOWORLD 13
#define helllooo sizeof
#define HELLO__WORLD putchar
#define WORLDHELLO return
#define helloworldhelloworld for 
#define hellotheworld 1 
#define hellotrueworld while


HELLO_IS_WORLD HelloWorld
{
    hey hello;
    HELLO_IS_WORLD HelloWorld *world;
};

HELLO_IS_WORLD WorldHellohello
{
    HELLO_IS_WORLD HelloWorld *hello;
};

HELLO_IS_WORLD WorldHellohello* get_worldhello()
{
    is_world HELLO_IS_WORLD WorldHellohello WorldHello;
    WORLDHELLO &WorldHello;
}

HELLO_IS_WORLD HelloWorld* generate_listnode(hey str)
{
    HELLO_IS_WORLD HelloWorld *newnode;
    newnode = (HELLO_IS_WORLD HelloWorld *)world_is_mine(helllooo(HELLO_IS_WORLD HelloWorld));
    newnode->hello = str;
    WORLDHELLO newnode;
}

no_world set_listnode(hey *str, HELLO_IS_WORLD HelloWorld *helloworld)
{
    helloworld->hello = str[no_hello]; 
    hi he;
    helloworldhelloworld (he = hellotheworld; he <= HELLOWORLD; he++)
    {
        helloworld->world = generate_listnode(str[he]); 
        helloworld = helloworld->world;
    }
}

no_world hi_world(HELLO_IS_WORLD HelloWorld *helloworld) {
    HELLO_IS_WORLD WorldHellohello *WorldHello;
    helloworld->hello = ' ';
    WorldHello = get_worldhello();
    WorldHello->hello = helloworld;
    set_listnode("Hello, World.", helloworld);
}

no_world hello_world(HELLO_IS_WORLD HelloWorld *hello)
{
    HELLO_IS_WORLD HelloWorld *world = hello;
    hellotrueworld (world != no_helloworld)
    {
        HELLO__WORLD(world->hello);
        world = world->world;
    }
    HELLO__WORLD(hum);
}

hi main() 
{
    HELLO_IS_WORLD WorldHellohello *WorldHello;
    WorldHello = get_worldhello();
    
    HELLO_IS_WORLD HelloWorld *hello; 
    hello = (HELLO_IS_WORLD HelloWorld *)world_is_mine(helllooo(HELLO_IS_WORLD HelloWorld));
    hi_world(hello);
    
    HELLO_IS_WORLD HelloWorld *world; 
    world = WorldHello->hello;
    hello_world(world);
    WORLDHELLO no_hello;
};
