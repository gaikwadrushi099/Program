#include<stdio.h>

typedef unsigned int UINT;

int Toggle(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF, Mask = 0, Result = 0;

    Mask1 = Mask1 << (Start - 1);
    Mask2 = Mask2 >> (32 - End);

    Mask = Mask1 & Mask2;

    Result = No ^ Mask;

    return Result;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    UINT i = 0, j = 0;

    printf("Enter the Value: \n");
    scanf("%d",&Value);

    printf("Enter the Starting Bit :\n");
    scanf("%d",&i);

    printf("Enter the ending Bit : \n");
    scanf("%d",&j);

    iRet = Toggle(Value, i, j);
    printf("%d",iRet);

    return 0;
}