/*
steps to develop the application 
step 1: understand the problem statement 
step 2: write the algorithm
step 3: decide the programming language
step 4: write the program 
step 5: test the program
*/




/*accept n numbers from user and perform addition
values of N = 5
values: 10, 20, 30, 40, 50

output 
Addition : 150 */

//algorithm 
/*
   START
    accept the number of element from user
    allocate the memory to store that number 
    accept the numbers from user 
    perform addition of all numbers
    display the addition 
   END  
*/



#include<stdio.h>  // for printf and scanf 
#include<stdlib.h>  //for malloc and free

///////////////////////////////////////////////////////////
//
// Application Name: addition of N numbers
// Input: N numbers 
// Output: Addition
// Author: Srushti Sadashiv Parit 
// Date: 18 september 2022
//
///////////////////////////////////////////////////////////

int main()
{
    int *Arr = 0;
    int iSize = 0;
    int i = 0;
    int iSum = 0;

    printf("please enter the number of elements that you want to add\n");
    scanf("%d", &iSize);
   
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory allocated !!!!\n");

    printf("Please enter the values\n");

    for ( i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    //perform addition

    for ( i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    free(Arr);

    printf("Addition is : %d \n", iSum);

    return 0;    

}

    
    
    




