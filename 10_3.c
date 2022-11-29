#include<stdio.h>
int Convert(int iNo)
{
    int iAns = 0;
    iAns = iNo * 1000;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet  = 0;
    printf("Plese enter Kilometer:\n");
    scanf("%d",&iValue);

    iRet = Convert(iValue);
    printf("%d\n",iRet);

    return 0;
}