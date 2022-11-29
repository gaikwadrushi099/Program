#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iLength = 0;// iRet = 0;

    printf("How Many element you want to store:\n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Please enter elements\n");
    for(iCnt = 0; iCnt< iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);
   // printf("Result is : %d\n",iRet);

    free(ptr);

    return 0;


}