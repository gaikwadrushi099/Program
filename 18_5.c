#include<stdio.h>

void Display( int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 1 ; iCnt<= 8; iCnt++)
    {
        iAns = iCnt * 2;
        printf("%d\t",iAns);
    }


int main()
{
    int iValue = 0;

    printf("Enter one Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}