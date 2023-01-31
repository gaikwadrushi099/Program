#include<stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int iCnt = 0;
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        if(Digit == 1)
        {
            iCnt++;
        }
        No = No / 2;
    }
    return iCnt;

}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Plese enter the Number :\n");
    scanf("%d",&Value);

    iRet = CountOnBits(Value);
    printf("%d",iRet);

    return 0;
}