#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  char name[15];
  scanf("%s", name);

  // if (strlen(name) == 0)
  // {
  //   printf("Invalid name length\n");
  //   return 1;
  // }

  for (int i = 0; i <strlen(name); i++)
  {
    if (isdigit(name[i]))
    {
      printf("No numbers in name\n");
      return 1;
    }
  }

  printf("Hello, %s\n", name);
}
