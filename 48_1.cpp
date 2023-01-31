#include<iostream>
using namespace std;

void Display(char value, int No)
{
    for(int iCnt = 0; iCnt < No; iCnt++)
    {
        cout<<value<<"\t";
    }
}

int main()
{
    char iValue = 0;
    int iNo = 0;
    cout<<"Enter the value:"<<"\n";
    cin>>iValue;

    cout<<"Enter the number : "<<"\n";
    cin>>iNo;

    Display(iValue,iNo);

    return 0;
}