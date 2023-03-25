#include <stdio.h>

int main()
{
    char string[50];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of the string is %d\n", length);

    return 0;
}
