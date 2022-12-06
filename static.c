#include <stdio.h>

//difference between static and auto storage classes

void demo() //return value is nothing for void so dont write return 
{
    auto int A = 10;
    A++;
    printf("value from demo is: %d\n", A);

}
void hello()
{
    static int B = 10; //static preserves the value 
    B++;
    printf("value from demo is: %d\n", B);

}

int main()
{
    demo();
    demo();
    demo();

    hello();
    hello();
    hello();
    return 0;
}