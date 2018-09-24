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
        printf("Debug: %i\n", i);
        printf("Debug: %i\n", j);
        
        strncpy(subStringArray[j], string + i, i);

        printf("Debug substring: %s\n", subStringArray[j]);

        i = i +2;
        j = j+ 1;
    }
    
   return 0;
}
