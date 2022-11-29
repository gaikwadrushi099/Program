#include<stdio.h>
#include<stdbool.h>

bool StrCapital(char *str)
{
  
    if((*str =='a')|| (*str == 'e')||(*str =='i')|| (*str == 'o')||(*str == 'u'))
    {
     return true;
    }
    else
    {
        return false;
    }
   // str++;
  
}
int main()
{
  char Arr[30];
  bool bret = false;

  printf("Enter one string:\n");
  scanf("%[^'\n]s",Arr);

  bret = StrCapital(Arr);
  if(bret==true)
  {
    printf("it contain vowel\n");
  }
  else
  {
    printf("it not contains vowel\n");
  }
  

  return 0;
}