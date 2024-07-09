#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("manin start\n");
    hello();
    printf("main end\n");    
    return 0;
}