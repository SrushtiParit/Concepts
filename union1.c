#include<stdio.h>

struct demo
{
    int i;
    float f;
    double d;
};

union hello
{
    int i;
    float f;
    double d;
};
union hello1
{
    char ch;
};

int main()
{
    struct demo dobj;
    union hello hobj;
    union hello1 h1obj;


    printf("size of the structure is: %d\n", sizeof(dobj));
    printf("size of the union is: %d\n", sizeof(hobj));
    printf("size of the union is: %d\n", sizeof(h1obj));
    


    dobj.i = 11;
    dobj.f = 90.8;
    dobj.d = 90.542;
}



  