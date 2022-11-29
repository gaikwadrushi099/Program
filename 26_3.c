#include<stdio.h>

void StrCapital(char *str)
{
  while(*str != '\0')
  {
    if((*str >='a') && (*str <= 'z'))
    {
     *str = *str - 32;
    }
    else if((*str >='A') && (*str <= 'Z'))
    {
      *str = *str + 32;
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