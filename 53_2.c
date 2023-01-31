#include<stdio.h>

void DisplayR()
{
    static int iCnt = 1;
    static int Ret = 5;
    if(iCnt <= Ret)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();      
    }
    
}

int main()
{
   
    DisplayR();

    return 0;
}