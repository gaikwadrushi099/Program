#include<stdio.h>

void StrCapital(char *str)
{
  while(*str != '\0')
  {
    if((*str >='0') && (*str <= '9'))
    {
     
    }
   
    str++;
  }
}
int main()
{
  char Arr[30];

  printf("Enter one string:\n");
  scanf("%[^'\n]s",Arr);

  StrCapital(Arr);
  printf("%s",Arr);

  return 0;
}