#include<stdio.h>
#include<stdbool.h>

int Greater(int iNo)
{
    
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Plese Enter One Number :\n");
    scanf("%d",&iValue);

    bRet = Greater(iValue);
    if(bRet == true)
    {
        printf("Greater \n",bRet);

    }
    else
    {
        printf(" Smaller \n",bRet);
    }
    return 0;
}