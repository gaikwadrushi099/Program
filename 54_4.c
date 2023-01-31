#include<stdio.h>

void DisplayR(int No)
{
    static char ch = 'A';
    if(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
        DisplayR(No);
    }
    
}

int main()
{
    int Value = 0;

    printf("Enter One Number :\n");
    scanf("%d",&Value);

    DisplayR(Value);

    return 0;
}