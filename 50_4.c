#include<stdio.h>
#include<stdbool.h>

// 4

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1101    1011    1111
//                                            D       B
//  0XFFFFFCAF

UINT ToggleBit(UINT No)
{
    UINT iMask = 0XFFFFFDBF;
    UINT iAns = 0;

    iAns = No ^ iMask;
    
    return iAns;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = ToggleBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
