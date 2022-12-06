#include<stdio.h>
#pragma pack(1)  //to avoid padding (preprocessor to compiler)

struct demo
{
    int i;
    char ch;
    float f;
    double d;
};
struct demo1
{
    int i2;
    char ch2;
    float f3;
    float f2;
    char dh;
};
struct demo2
{
    int i3;
    float f5;    //below are answers without pragma
    char dh1;    //size of the structure is: 24
    char ch3;    //size of dobj1: 20
    float f4;   //size of dobj2: 16
   
};

int main()
{
    struct demo dobj;
    struct demo1 dobj1;
    struct demo2 dobj2;

    printf("size of the structure is: %d\n", sizeof(dobj));
    printf("size of dobj1: %d\n", sizeof(dobj1));
    printf("size of dobj2: %d\n", sizeof(dobj2));
    
}
