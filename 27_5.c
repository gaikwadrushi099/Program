#include<stdio.h>
#include<stdbool.h>

void CheckChar(char *str)
{
    if(*str)
    {
        CheckChar(str+1);
        printf("%c",*str);
    }   
}

int main()
{
    char Arr[30];
    char cValue = '\0';
    

    printf("Enter one String\n");
    scanf("%[^'\n']s",Arr);

    CheckChar(Arr);
    
    return 0;
}