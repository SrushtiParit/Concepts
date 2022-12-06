#include<stdio.h>

void fun()
{
    printf("inside function \n");
}
int main()
{
    fun();
    void(*fptr)();
    fptr = fun;
    fptr();

}