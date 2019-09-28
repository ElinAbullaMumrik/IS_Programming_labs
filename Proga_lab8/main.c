#include <stdio.h>
#include <string.h> // Для strncat

int main() {
    char string1[128];
    char string2[128];
    char string3[128];
    char string4[128];
    char character;
    int n;
    scanf("%s", &string1);
    scanf("%s", &string2);
    scanf("%d", &n);
    strncat(string1, string2, n);
    printf("%s\n", string1);
    scanf("%s", &string1);
    strcpy(string2, string1);
    printf("Full copied string %s\n", string2);
    strncpy(string3, string1, n);
    printf("First symbols %s\n", string3);
    scanf("%s", &string4);
    scanf("%c", &character);
    char * found;
    found = strrchr(string4, character);
    if (found == NULL)
        printf("Symbol not found\n");
    else
        printf("The symbols position is %d\n", found - string4 + 1);


    return 0;
}