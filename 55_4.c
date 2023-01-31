#include<stdio.h>

int Factorial(int No)
{
    static int iCnt = 1; 
    static int Fact = 1;

    if(iCnt <= No)
    {
        Fact = Fact * iCnt;
        iCnt++;
        Factorial(No);
    }
    return Fact;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter one Value : \n");
    scanf("%d",&Value);

    Ret = Factorial(Value);
    printf("Multiplication of all digit is : %d\n",Ret);

    return 0;
}