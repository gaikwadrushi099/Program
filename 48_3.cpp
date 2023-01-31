#include<iostream>
using namespace std;

template <class T>
T Frequency(T *arr, int iSize, T iNo)
{
    T iAns;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
           printf("%d",iCnt+1);
           break;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,10,20,30,10,40,10};

    Frequency(arr,9,40);
    

    return 0;
}