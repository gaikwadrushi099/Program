#include<stdio.h>

void Display(int No)
{
    static int iCnt = 0;
    if(No >= iCnt)
    {
        printf("%d\t*\t",No);
        No--;
        
    }
    Display(No);
}

int main()
{
    int Value = 0;

    printf("Enter one Value : \n");
    scanf("%d",&Value);

    Display(Value);

    return 0;
}