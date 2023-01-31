#include<stdio.h>

int MaxDigitsR(int No)
{
    static int iSum = 0;
    int iDigit = 0;
    static int Max = 0;

    if(iSum <= No)
    {
        iDigit = No % 10;
        if(iDigit > Max)
        {
            Max = iDigit;
            iDigit++;
        }
        No = No / 10;
        iSum++;
        MaxDigitsR(No);
    }
    return Max;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = MaxDigitsR(Value);

    printf("Maximum No of digits are : %d\n",iRet);
    
    return 0;
}