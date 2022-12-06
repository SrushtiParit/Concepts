#include<stdio.h>

int addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns= iNo1 + iNo2;
    return iAns;

}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("enter first number \n");
    scanf("%d", &iValue1);
    printf("enter second number \n");
    scanf("%d", &iValue2);

    iRet = addition(iValue1, iValue2);

    printf("addition id : %d\n", iRet);

    return 0;
}