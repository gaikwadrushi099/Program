#include<stdio.h>

int Multiplication(int iNo)
{
    int iDigit = 0, iSum = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum * iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("Multiplication of digit : %d\n",iRet);

    return 0;
}