#include<stdio.h>

int MinDigitsR(int No)
{
    static int iSum = 0;
    int iDigit = 0;
    static int Min = 9;

    if(iSum <= No)
    {
        iDigit = No % 10;
        if(iDigit < Min)
        {
            Min = iDigit;
            iDigit++;
        }
        No = No / 10;
        iSum++;
        MinDigitsR(No);
    }
    return Min;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = MinDigitsR(Value);

    printf("Minimum No of digits are : %d\n",iRet);
    
    return 0;
}