#include<stdio.h>
int DollerToINR(int iNo)
{
    int iAns = 0;
    iAns= iNo * 70;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter Number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);
    printf("value of INR is :%d",iRet);

    return 0;
}