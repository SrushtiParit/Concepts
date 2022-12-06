#include<stdio.h>
int main()
{
    int icnt=0;

    icnt = 1;    //1   (reinitialization of icnt)
    while (icnt<6)  //2
    {
        printf("Jai Ganesh......\n");   //4
        icnt++;  //3
    }
    
    return 0;
}