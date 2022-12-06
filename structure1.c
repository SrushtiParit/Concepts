#include<stdio.h>

//memory does not get allocated here 
struct demo     //structure declaration 
{
    int i;
    float f;
    int j;
    double d;

};

int main()
{
    //memory gets allocated here
    struct demo obj1;  //structure object or variable creation
    struct demo obj2;
    struct demo obj3;

    //member initialisation
    obj1.d = 11;
    obj2.i = 21;
    obj3.j = 51;

    printf("size of obj1:%d\n", sizeof(obj1));
    printf("size of obj2:%d\n", sizeof(obj2));
    printf("i of obj2 is :%d \n", obj2.i);


    
    return 0;
}