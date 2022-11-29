#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;

    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    for(iCnt = 0; iCnt < iNo1; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter one Number:\n");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}