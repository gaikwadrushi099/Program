#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  1000    0000    0000    0000    0000    0000    0000    0001
//    8       0       0       0       0       0       0       1
// 80000001
// 0X80000001

bool CheckBit(UINT No)
{
    UINT Result = 0;
    UINT iMask = 0X80000001;

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