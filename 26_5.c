#include<stdio.h>

int StrCapital(char *str)
{
  int icnt = 0;
  while(*str != '\0')
  {
    if(*str ==' ') 
    {
     icnt++;
    }
   str++;
  }
  return icnt;
}
int main()
{
  char Arr[30];
  int iret =0;

  printf("Enter one string:\n");
  scanf("%[^'\n]s",Arr);

  iret = StrCapital(Arr);
  printf("%d",iret);

  return 0;
}