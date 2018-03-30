#include <stdio.h>
#include <stdlib.h>

char * get_array(int size);

int main()
{
    char *p;
    p = get_array(10);
    printf("Back in main().\n");

    if(p) {
        for(int i = 0; i < 10; i++) {
            printf("Array[%d]: %d\n", i, *(p + i));
        }
    }
    free(p);
    return 0;
}

/* create and populate an array, return pointer to start */
char * get_array(int size) {
    char *ret = malloc(size);
    if (!ret)
        return NULL;

    for(int i = 0; i < size; i++)
        ret[i] = i;
    printf("Populated the array. Returning.\n");
    return ret;
}
