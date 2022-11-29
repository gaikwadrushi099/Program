#include<stdio.h>
double SquareFeet(float fTemp)
{
    double iAns = 0.0;
    iAns = fTemp * 0.0929;
    return iAns;
}

int main()
{
    float iValue = 0.0;
    double iRet  = 0.0;
    
    printf("Enter Area in Square feet:\n");
    scanf("%f",&iValue);

    iRet = SquareFeet(iValue);
    printf("%f\n",iRet);

    return 0;
}