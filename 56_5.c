#include<stdio.h> 

int Reverse(int Value)
{
    int iDigit = 0;
    static int iSum  = 0;

    if(Value != 0)
    {
        iDigit = Value % 10;
        iSum = iSum * 10 + iDigit;
        Value = Value / 10;
        Reverse(Value);
    }
    return iSum;

}
int main()    
{    
    int No = 0;
    int iRet = 0;

    printf("Enter a number: ");    
    scanf("%d", &No);    

    iRet = Reverse(No);
    printf("Reversed Number: %d",iRet);    

    return 0;  
}   