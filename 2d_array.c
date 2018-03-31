#include <stdio.h>

int main()
{
    int x;
    int y;
    int array[8][8];                /* declare the array */

    for ( x = 0; x < 8; x++ ) {     /* populate the array  */
        for ( y = 0; y < 8; y++ )   /* using a nested loop */
            array[x][y] = x * y;
    }
    
    printf( "Array contents:\n" );      /* print out each element */
    for ( x = 0; x < 8; x++ ) {
        for ( y = 0; y < 8; y++ ) {
            printf( "[%d][%d] = %d\t", x, y, array[x][y] );
        }
        printf( "\n" );
    }
}
