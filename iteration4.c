#include<stdio.h>


//do while loop is tale conditin checking loop 
//In worst case do while loop iterates 1
int main()
{
    int icnt = 0;

    icnt = 1;   //1
    do
    {
        printf("Jai Ganesh......\n");   //4
        icnt++;  //3
    } while (icnt<6);    //2
    
}