#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{   
    char Arr[10];
    //char Brr[10];

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);
    printf("Reverse string is: %s",Arr);
    return 0;
}