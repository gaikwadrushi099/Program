#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckOn(UINT No, UINT Pos1, UINT Pos2)
{
    UINT Mask = 0X00000001;
    UINT Result = 0;

    if(((Pos1 < 1) && (Pos1 > 32)) && ((Pos2 < 1) && (Pos2 > 32)))
    {
        printf("Invalid Position:\n");
    }

    Mask = Mask << (Pos1 -1);
    Mask = Mask << (Pos2 -1);

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
    UINT Position1 = 0;
    UINT Position2 = 0;

    printf("Enter the value: \n");
    scanf("%d",&Value);

    printf("Enter the Position1: \n");
    scanf("%d",&Position1);

    printf("Enter the Position2: \n");
    scanf("%d",&Position2);

    bRet = CheckOn(Value, Position1, Position2);
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