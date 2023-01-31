#include<iostream>
using namespace std;

template <class T>
void Frequency(T *arr, int iSize)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",arr[iCnt]);
    }
    printf("\n");
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
       printf("%d\t",arr[iCnt]);
    }
}

int main()
{
    int arr[] = {10,20,30,10,20,30,10,40,10};

    Frequency(arr,9);
    

    return 0;
}