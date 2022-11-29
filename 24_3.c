#include<stdio.h>

void Display(char ch)
{

     if((ch >= 'A') && (ch <= 'Z'))
        {
            printf("%c",ch - 32);
            ch++;
        }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter one charactor\n");
    scanf("%c",&cValue);

    Display(cValue);
  
    return 0;
  
}