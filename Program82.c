#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iMax = Arr[0], iCnt = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax++;
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter Number of Element :\n");
    scanf("%d", &iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter the elements: \n");
    for(i = 0; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet = Maximum(ptr,iLength);
    printf("Maximum Number is : %d",iRet);

    free(ptr);
    return 0;
}