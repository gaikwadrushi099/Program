#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("*");
    }
}

    

int main()
{
   int iValue = 5;

   Display(iValue);
 
    return 0;
}