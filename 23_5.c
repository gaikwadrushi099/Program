#include<stdio.h>
#include<stdbool.h>

void Display(char cValue)
{
   char A = 9.20;
   char B = 8.30;
   char C = 9.30;
   char D = 10.30;

   printf("Yor exam time is %d",A,B,C,D);
   
}

int main()
{
    char ch = '\0';
    bool bRet = false;
    
    printf("Enter one character\n");
    scanf("%c",&ch);

   Display(ch);
    return 0;
}