#include<stdio.h>
#include<stdbool.h>

bool Display(char cValue)
{
   if((cValue>='0') && (cValue<='9'))
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
        printf("it is Digit");
    }
    else
    {
        printf("it is not Digit");
    }
    return 0;

}