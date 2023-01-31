#include<stdio.h>

int SumDigit(int No)
{
    static int Sum = 0;
    static int Digit = 0;

    if(No != 0)
    {
        Digit = No % 10;
        Sum = Sum + Digit;
        No = No / 10; 
        SumDigit(No);
    }
    
    return Sum;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter one Value : \n");
    scanf("%d",&Value);

    Ret = SumDigit(Value);
    printf("Addition of all digit is : %d\n",Ret);

    return 0;
}