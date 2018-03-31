#include <stdio.h>

int main()
{
    char my_string[256];
    printf( "Enter a long string:\n" );

    /* get input from keyboard */
    fgets ( my_string, 256, stdin );    /* this passes a pointer to the array */

    printf( "You entered:\n%s", my_string );
    return 0;
}
