#include <stdio.h>

int main()
{
    int x;                  /* A normal integer. */
    int *p;                 /* A pointer to an integer ("p" is an integer,
                               so p must be a pointer to an integer). */

    /*p = &x;                  This is where the pointer should be initialized. */
    
    printf ( "Enter an integer:\n" );
    scanf( "%d", &x );      /* Put a value in the address of x. */

    printf( "Address in p: %x\n", p );      /* Use the uninitialized p pointer.
                                               Works but points to something random.
                                               Could cause the program to crash. */
    printf( "Contents of what p points to: %d\n", *p );
    printf( "Address of x: %x\n", &x );
    printf( "Contents of x: %d\n", x );
}
