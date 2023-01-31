#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    if((Pos < 1) || (Pos > 32))
    {
        printf("Invalid Position: \n");
    }

    Mask = Mask << (Pos -1);
    
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
    UINT position = 0;

    printf("Enter the Value : \n");
    scanf("%d",&Value);

    printf("Enter the Position : \n");
    scanf("%d",&position);
    
    bRet = CheckBit(Value, position);
    if(bRet == true)
    {
        printf("True\n",position);
    }
    else
    {
        printf("False\n",position);
    }
    return 0;
}