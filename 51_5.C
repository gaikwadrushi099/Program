#include<stdio.h>

typedef unsigned int UINT;

// 0000     0000    0000    0000    0000    0000    0000    0000    
// 1111     0000    0000    0000    0000    0000    0000    1111
//
int CheckBit(UINT No)
{
    UINT Mask = 0XF000000F;
    UINT Result = 0;

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
    
    iRet = CheckBit(Value);
    printf("%d",iRet);

    return 0;
}