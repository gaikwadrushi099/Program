#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0001    1100    0000
//    0       0       0       0       0       1       B       0
// 000001B0
// 0X000001B0

bool CheckBit(UINT No)
{
    UINT Result = 0;
    UINT iMask = 0X000001B0;

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
        printf(" bit is ON\n");

    }
    else
    {
        printf(" bit is OFF\n");
    }

}