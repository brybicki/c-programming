#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;                  /* A normal integer. */
    int *p;                 /* A pointer to an integer ("p" is an integer,
                               so p must be a pointer to an integer). */

    p = &x;                 /* Assign the address of x to p. */
    
    printf ( "Enter an integer:\n" );
    scanf( "%d", &x );      /* Put a value in the address of x, could also use p here. */

    printf( "Address in p: %x\n", p );
    printf( "Contents of what p points to: %d\n", *p );
    printf( "Address of x: %x\n", &x );
    printf( "Contents of x: %d\n", x );

    free(p);                /*free the memory */
    printf( "Contents of what p points to: %d\n", *p ); /* dereference the already freed pointer - crash */

}
