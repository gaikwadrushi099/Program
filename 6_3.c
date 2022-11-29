#include<stdio.h>
#include<stdbool.h>

int Greater(int iNo1,int iNo2)
{
    
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Plese Enter One Number \n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = Greater(iValue1,iValue2);
    if(bRet == true)
    {
        printf("Equal\n",bRet);

    }
    else
    {
        printf("Not Equal\n",bRet);
    }
    return 0;
}