#include<stdio.h>

int Product(int No)
{
    static int Mult = 1;
    static int Digit = 0;

    if(No != 0)
    {
        Digit = No % 10;
        Mult = Mult * Digit;
        No = No / 10; 
        Product(No);
    }
    
    return Mult;
}

int main()
{
    int Value = 0;
    int Ret = 0;

    printf("Enter one Value : \n");
    scanf("%d",&Value);

    Ret = Product(Value);
    printf("Multiplication of all digit is : %d\n",Ret);

    return 0;
}