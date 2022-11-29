#include<stdio.h>

void Multiples(int iNo)
{
    int iAns = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter one Number:\n");
    scanf("%d",&iValue1);

    Multiples(iValue1);

    return 0;
}