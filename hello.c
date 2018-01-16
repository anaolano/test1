#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Yo yo yo

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
//LIL JON HACKED US OH NO D asdfghjkl
  printf("Hello whata do shawty named:, %s\n", name);
  printf("Your lucky number is %d\n", rand());
}
