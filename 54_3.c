#include<stdio.h>

void DisplayR(int No)
{
    if(No != 0)
    {
        printf("%d\t",No);
        No--;
        DisplayR(No);
    }
}

int main()
{
    int Value = 0;

    printf("Enter One Number : \n");
    scanf("%d",&Value);

    DisplayR(Value);

    return 0;
}