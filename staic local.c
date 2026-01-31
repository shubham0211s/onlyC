#include <stdio.h>

void function()
{
    int x = 20;
    static int y = 30;
    x = x + 10;
    y = y + 10;
    printf("\tLocal: %d\n\tStatic:%d\n",x,y);
}
int main()
{
    printf("first Call\n");
    function();
    printf("Second call\n");
    function();
    printf("Third call\n");
    function();
    
}
