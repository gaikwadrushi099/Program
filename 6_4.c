#include<stdio.h>
#include<stdbool.h>

int Greater(int iNo1,int iNo2,int iNo3)
{
    int iAns = 0;
    iAns = iNo1 * iNo2 * iNo3;
    return iAns;
    if()
    {
        
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int bRet = false;

    printf("Plese Enter Three Number \n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    bRet = Greater(iValue1,iValue2,iValue3);
    printf("%d\n",bRet);
    return 0;
}