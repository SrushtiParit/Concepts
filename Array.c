#include<stdio.h>

int main(){
    int Arr[5] = {10, 20, 30, 40, 50 };
    printf("Base address of array: %p \n", Arr);
    printf("Base address of array: %p \n", &Arr);
    printf("Size of Array is : %d \n", sizeof(Arr));
    printf("second element: %d\n", &Arr[2]);
    

    return 0;

}