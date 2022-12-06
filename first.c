#include<stdio.h>

//No1 & No2 is a integer which is defined external to this file 
extern int No1;   //declaration of No1 and No2
extern int No2;   //extern keyword is imp for declaration
//function declaration 
//demo is a function which accepts nothing and which returns nothing is external to this file 
extern void Demo();

int main()
{
        Demo();

        printf("Value of No1 : %d\n",No1);
        printf("Value of No2 : %d\n",No2);
        
        return 0;
}

//run these commands on terminal to run first ans second file together
// gcc first.c second.c -o myexe
//./myexe