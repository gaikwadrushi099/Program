#include<stdio.h>
int DisplayFactors(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iAns = 1;
    
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iAns =  iAns * iCnt ;
    }
    
    return iAns;
}



int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter one number:\n");
    scanf("%d",&iValue);

    iRet = DisplayFactors(iValue);
    printf("Factors are:%d\n",iRet);

    return 0;
}