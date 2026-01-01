#include <stdio.h>
#include <string.h> // Required header for string functions

int main() {
    char source[] = "Hello";
    char destination[20]; // Ensure destination has enough space
    char str3[] = " World";
    char str4[] = "Hello";
    char str5[] = "Hi";
    size_t length = strlen(source);
    printf("1. strlen()\n");
    printf("Length of \"%s\" is %zu\n\n", source, length);
    strcpy(destination, source);
    printf("2. strcpy()\n");
    printf("Copied \"%s\" to destination. Destination now holds: \"%s\"\n\n", source, destination);
    strcat(destination, str3); 
    printf("3. strcat()\n");
    printf("After concatenation: \"%s\"\n\n", destination);
    printf("4. strcmp()\n");
    int compare1 = strcmp(source, str4);
    int compare2 = strcmp(source, str5);
    printf("Comparing \"%s\" and \"%s\": Result is %d (0 means identical)\n", source, str4, compare1);
    printf("Comparing \"%s\" and \"%s\": Result is %d (non-zero means different)\n\n", source, str5, compare2);

    return 0;
}
