#include<iostream>
using namespace std;

template <class T>
T Maximum(T *Arr, T No)
{
    T i = Arr[0];
    for(T iCnt = 0; iCnt <No; iCnt++)
    {
        if(i < Arr[iCnt])
        {
            i = Arr[iCnt];
        }
    }
    return i;
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    int iSum = Maximum(Arr, 5);
    printf("Maximum Element is : %d",iSum);

    // float fSum = Maximum(Brr, 5);
    // printf("Maximum Element is : %f",fSum);


    return 0;
}