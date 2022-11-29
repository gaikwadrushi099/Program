#include<stdio.h>
double Convert(float fTemp)
{
    double iAns = 0.0;
    (iAns = (fTemp - 32)*(5/9));
    return iAns;
}

int main()
{
    float iValue = 0.0;
    double iRet  = 0.0;
    
    printf("Enter tempture in fahrenheit:\n");
    scanf("%f",&iValue);

    iRet = Convert(iValue);
    printf("%f\n",iRet);

    return 0;
}