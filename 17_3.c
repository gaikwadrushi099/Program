#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Manimum(int Arr[], int iSize)
{
    int iCnt = 0; int iMin = Arr[0], iMax = Arr[0];
    int iAns = 0;
    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else
        {
            iMin = Arr[iCnt];
        }
     
    }
    iAns = iMax - iMin;
    return iAns;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    bool iRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Manimum(ptr, iLength);
    printf(" Difference is %d\n",iRet);
    free(ptr);

    return 0;
}