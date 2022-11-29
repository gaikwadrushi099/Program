#include<stdio.h>
#include<stdbool.h>

bool Display(char cValue)
{
   if(((cValue>='a') && (cValue<='z')) || ((cValue>='A') && (cValue<='Z')))
   {
        return true;
   }
   else
   {
        return false;
   }
}

int main()
{
    char ch = '\0';
    bool bRet = false;
    
    printf("Enter one character\n");
    scanf("%c",&ch);

    bRet = Display(ch);
    if(bRet == true)
    {
        printf("it is a character");
    }
    else
    {
        printf("it is not a character");
    }
    return 0;

}