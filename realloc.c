#include<stdio.h>

int main()
{
    int *p = NULL;
    p = (int *)malloc(10 * sizeof(int));
    //use the memory 
    p = (int *)realloc (p, 15 * sizeof(int));
    //use the moemory
    free(p);
    return 0;
}