#include<stdio.h>

void Display( int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1 ; iCnt<=iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter one Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}