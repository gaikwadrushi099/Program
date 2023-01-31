#include<stdio.h>

typedef unsigned int UINT;

int CheckBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    Mask = Mask << (Pos -1);
    Result = No ^ Mask;

    return Result;
}

int main()
{
    UINT Value = 0;
    UINT position = 0;
    UINT iRet = 0;

    printf("Emter the Value :\n");
    scanf("%d",&Value);

    printf("Enter the position : \n");
    scanf("%d",&position);

    iRet = CheckBit(Value, position);
    printf("%d",iRet);

    return 0;
}