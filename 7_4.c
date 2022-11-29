#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
       
           // printf("%d\t",iCnt);
       
    
    if((iCnt % 2) == 0)
    {
       // printf("Even%d\t",iCnt);
    }
    else
    {
        printf("%d\t",iCnt);
    }
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter one Number:\n");
    scanf("%d",&iValue1);

    DisplayOdd(iValue1);

    return 0;
}