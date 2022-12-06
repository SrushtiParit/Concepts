
#include "Marvellous.h"

int main()
{
    struct demo obj;
    int no = 11;
    float radius = 30.6f;   //f mhanje compulsory float otherwise te double consider hota 
    float area = PI * radius * radius;

    IPTR ptr = &no;

    printf("Area is %f \n", area);
    printf("Value of no is %d\n", *ptr);
    return 0;
}

/*
#define NULL (void *)0         
this is an inbuilt macro 
this is the statement that points to 0 that is NULL pointer
*/


//gcc -save-temps HeaderDemo.c -o HeaderDemo.i  
//above command is used to get intermmediate file 