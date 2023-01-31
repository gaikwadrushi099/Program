#include<stdio.h>

void DisplayR(int No)
{
    static char ch = 'a';
    if(ch <= 'f')
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