#include<stdio.h>
#include<stdbool.h>   //boolean was included later in c language so we have to include header to use boolean

//% mod operator (gives remainder)
//== equality operator
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet;    //if want to initialize this variable 
                  //bool bRet = false; 
                  //their is no format specifer for boolean
    printf("Enter one number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if (bRet == true)
    {
        printf("Given value is an even number ");
    }
    else
    {
        printf("Given value is an odd number");
    }

    return 0;
}