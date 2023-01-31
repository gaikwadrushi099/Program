#include<stdio.h>

typedef unsigned int UINT;

//0000  0000    0000    0000    0000    0000    0000    0000
//0000  0000    0000    0000    0000    0000    0000    1000
//
//

int CheckBit(UINT No)
{
    UINT Mask = 0X78787878;
    UINT Result = 0;

    Result = No & Mask;
   
    return Result;
}
int main()
{   
    UINT Ret = 0;
    UINT Value = 0;

    printf("Enter the value: \n");
    scanf("%d",&Value);

    Ret = CheckBit(Value);
    printf("%d",Ret);
   

    return 0;   
}
