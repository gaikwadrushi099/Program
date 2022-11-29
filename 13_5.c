#include<stdio.h>

int Multiplication(int iNo)
{
    int iDigit = 0, iSum = 0, iSum1 = 0;
    int Even = 0, odd = 0;
    int iCnt=0;
    while(iNo != 0)
   {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        //iCnt++;
        if((iNo % 2) == 0)
        {
            iSum = iSum + Even;
        } 
        if((iNo % 2) != 0)
        {
            iSum1 = iSum1 + odd;
        }
    }
    return iSum - iSum1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("Difference between even and odd : %d\n",iRet);

    return 0;
}