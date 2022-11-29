#include<stdio.h>
void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iAns = iCnt * iNo;
        printf("%d\t",iAns);
    }
   
}

int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter one number:\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}