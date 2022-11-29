#include<stdio.h>
#include<stdbool.h>

bool Display(char cValue)
{
   if((cValue>='a') && (cValue<='z'))
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
        printf("it is small letter");
    }
    else
    {
        printf("it is not small latter");
    }
    return 0;

}