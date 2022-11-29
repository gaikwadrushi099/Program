#include<stdio.h>


void DisplayASCII()
{
    printf("ASCII Table\n");
    printf("Character Decimal Hex Octal\n");
    int i = 0;
    for(i=1; i<255; i++)
    {
        printf("%c\t%d\t%x\t%o\n",i,i,i,i);
    }
}

int main()
{
    DisplayASCII();
    return 0;
}