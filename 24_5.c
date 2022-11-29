#include<stdio.h>

void Display(char cValue)
{
    char ch = '\0';
     printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Charcter Decimal Hex Octal\n");

    if(ch = cValue)
    {
        printf("%c\t%d\t%x\t%o\n",ch,ch,ch,ch);
    }

    printf("\n_________________________________________________\n");

}
int main()
{
    char ch = '\0';

    printf("enter one charactor\n");
    scanf("%c",&ch);

    Display(ch);

   
    return 0;
}