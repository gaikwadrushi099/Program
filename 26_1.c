#include<stdio.h>

void StrLow(char *str)
{
  while(*str != '\0')
  {
    if((*str >='A') && (*str <= 'Z'))
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

  StrLow(Arr);
  printf("%s",Arr);

  return 0;
}