#include<stdio.h>


int  Percentage(int iNo1,int iNo2)
{
    float iAns;
    iAns = (iNo2 / iNo1)* 100;
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
   float fRet;

    printf("Plese Enter Total marks \n");
    scanf("%d",&iValue1);

    printf("Plese Enter Obtained Marks \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("percentage is :%f\n",fRet);
    return 0;
}