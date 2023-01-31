#include<stdio.h>

void DisplayR(int No)
{
    static int iCnt = 1;

    if(iCnt <= No)
    {
        printf("%d\t",iCnt);
        iCnt++;
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