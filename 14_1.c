#include<stdio.h>
#include<stdlib.h>

int SumEvenOdd(int Arr[], int iSize)
{
    int iEvenCnt = 0, iOddCnt = 0, iSum =0;
    int iCnt = 0, iSum1 = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {   
            iSum = iSum + Arr[iCnt];
        }
        else
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
    }
    return iSum - iSum1;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iLength = 0, iRet = 0;

    printf("How Many element you want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter elements\n");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = SumEvenOdd(ptr,iLength);
    printf("Result is : %d\n",iRet);

    free(ptr);

    return 0;


}