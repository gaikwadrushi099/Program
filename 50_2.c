#include<stdio.h>
#include<stdbool.h>

// 4

typedef unsigned int UINT;

//  0000    0000    0000    0000    0000    0000    0000    0000

//  1111    1111    1111    1111    1111    1101    1011    1111
//                                            D        A
//  0XFFFFFDAF

UINT OffBit(UINT No)
{
    UINT iMask = 0XFFFFFDAF;
    
    return (No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&Value);

    iRet = OffBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
