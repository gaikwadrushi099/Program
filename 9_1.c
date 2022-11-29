#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        
       
        
        printf("*\t #\t",iCnt);
        
        
    }
}

int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter one number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}