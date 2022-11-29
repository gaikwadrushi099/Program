#include<stdio.h>
//#include<string.h>

int main()
{
    char Name[30];
    printf("Enter Full Namen\n");
    scanf("%[^\n]",&Name);
    printf("Your Name is :%s\n",Name);
    return 0;
}