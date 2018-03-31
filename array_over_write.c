#include <stdio.h>

int main()
{
    int i;
    char buf[10];

    for (i = 0; i <= 10; i++) {     /* write past the array */
        buf[i] = i;
    }
}
