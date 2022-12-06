#include<stdio.h>

void Maximum(int No1, int No2)
{
    if (No1>No2)
    {
        printf ("out of the two numbers %d is the bigger number", No1);
    }
    else if (No2>No1)
    {
        printf("out of the two numbers %d is the bigger number" , No2);
    }
    else
    {
        printf("Both the given numbers are same");
    }
    
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the first Number: \n");
    scanf("%d", &iValue1);

    printf("Enter the second number: \n");
    scanf("%d", &iValue2);  

    Maximum(iValue1, iValue2);
    return 0;
}