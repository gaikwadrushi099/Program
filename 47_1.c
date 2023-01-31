#include<stdio.h>

template <class T>
T Multiple(T No1, T No2)
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    iRet = Multiple(10,20);
    printf("%d",iRet);

    return 0;
}