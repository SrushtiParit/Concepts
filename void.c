#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 9.09;
    double d = 89.9078;

    char *cp = &ch;
    int *op = &i;
    float *fp = &f;
    double *dp = &d;
    


    printf("value of ch : %c\n", ch );
    printf("address of ch : %p\n", &ch );
    printf("value inside ch : %p\n", cp );
    printf("data refer by  cp : %c\n", *cp );
    printf("size of ch :%d\n", sizeof(ch));
    printf("size of cp :%d\n", sizeof(cp));

    void *vp = &ch;
    printf("data refer by  cp: %c\n", *(char *)vp );  //(char *) is used to typecast

    vp = &i;
    printf("data refer by vp : %d \n", *(int *)vp); //(int *) is used to typecast



}