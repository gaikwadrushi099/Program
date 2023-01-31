#include<iostream>
using namespace std;

template <class T>
T Add(T *Arr, T No)
{
    T iSum;
    for(T iCnt = 0; iCnt < No; iCnt++)
    {
        iSum = Arr[iCnt] + iSum;
    }
    return iSum;
}

int main()
{
    int Arr[] = {10,20,30,50};
    float Crr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};

    int iSum = Add(Arr, 4);
    printf("Addition is : %d",iSum);

    float Sum = Add(Crr, 5);
    printf("Addition is : %f",Sum);

    return 0;
}