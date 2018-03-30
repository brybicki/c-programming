#include <stdio.h>

struct xampl {
    int x;
};

int main()
{
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure;           /* need the & when dealing with structs
                                   and pointing to them */

    printf( "The x from structure contains: %d\n", ptr ->x );  /* -> means get w/e is at that memory address */
}
