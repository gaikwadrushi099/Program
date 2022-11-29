#include<stdio.h>

double CircleArea(float Radius)
{
    float Area = 0.0;
    float PI = 3.14;
    Area = PI* Radius * Radius;
    return Area;
}

int main()
{
    float iValue = 0.0;
    double iRet  = 0.0;
    printf("Radius of circle :\n");
    scanf("%f",&iValue);

    iRet = CircleArea(iValue);
   printf("%f\n",iRet);
    
   return 0;
}