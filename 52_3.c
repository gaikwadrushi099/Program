#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000
//  0000    0000    0000    0000    0000    1001    0000    0000
//                                            9

bool CheckOn(UINT No)
{
    UINT Mask = 0X00000900;
    UINT Result = 0;

    Result = No & Mask;

    if(Result == Mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = false;

    printf("Enter the value: \n");
    scanf("%d",&Value);

    bRet = CheckOn(Value);
    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}