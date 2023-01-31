#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No1, UINT No2)
{
    int iCnt = 0;
    int Digit = 0;

    while(No1 != 0)
    {
        Digit = No1 % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        No1 = No1 / 2;
    }
    return iCnt;
}
int CountOnBits1(UINT No1, UINT No2)
{
    int iCnt1 = 0;

    int Digit1 = 0;

    while(No2 != 0)
    {
        Digit1 = No2 % 2;
        if(Digit1 == 1)
        {
            iCnt1++;
        }
        No2 = No2 / 2;
    }
    
    return iCnt1;

}

int main()
{
    UINT Value1 = 0;
    UINT Value2 = 0;
    UINT iRet = 0;
    UINT iRet1 = 0;

    printf("Plese enter the Number :\n");
    scanf("%d",&Value1);

    printf("Plese enter the Number :\n");
    scanf("%d",&Value2);

    iRet = CountOnBits(Value1 , Value2);
    printf("%d\t",iRet);

    iRet1 = CountOnBits1(Value1 , Value2);
    printf("%d",iRet1);

    return 0;
}