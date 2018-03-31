#include <stdlib.h>

int main()
{
    int *ptr = malloc( sizeof(int) );       /* set ptr to point to a memory address of size int */
    int *ptr1 = malloc( sizeof(*ptr1) );    /* allocate using the pointer directly - cleaner */

    float *ptr2;
    /* hundreds of lines of code... */
    ptr2 = malloc( sizeof(*ptr2) );         /* allocate memory for a variable */

    free( ptr );                            /* return memory to the operating system */
    free( ptr1 );                           /* return memory to the operating system */
    free( ptr2 );                           /* return memory to the operating system */
}
