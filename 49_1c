#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0100    0000    0000    0000
//    0       0       0       0       4       0       0       0
// 00004000
// 0X00004000

bool CheckBit(UINT No)
{
    UINT Result = 0;
    UINT iMask = 0X00004000;

    Result = No & iMask;
    
    if(Result == iMask)
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

    bRet = CheckBit(Value);
    if(bRet == true)
    {
        printf("15th bit is ON\n");

    }
    else
    {
        printf("15th bit is OFF\n");
    }

}