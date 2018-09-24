#include <stdio.h>
#include <string.h>

int main() 
{
   char string[50];
   char subStringArray[100][50];

   printf("Input a string\n");
   gets(string);

    int i = 0, j = 0;

    for(i = 0; i < sizeof(string) && string[i] != '\n' && string[i] != NULL;)
    {
        strncpy(subStringArray[0], string + i, 2);
        printf("Debug substring: %s\n", subStringArray[0]);

        i = i + 2;
        j = j+ 1;
    }

   return 0;
}
