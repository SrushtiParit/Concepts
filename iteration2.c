#include<stdio.h>

int main()
{

 //this is the normal way to print things   
    int arr[4]={11,21,51,101};
    printf("elements of array are:\n");

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);


//this is using loop to do the same thing

    int icnt=0;
        //   1      2        3
    for (icnt = 0; icnt<4; icnt++)
    {
       printf("%d\n",arr[icnt]);   //4
    }
    

    return 0;
}