
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if (isalnum(ch))
    {
        printf("The character '%c' is an alnum character.\n", ch);
    }
    else
    {
        printf("The character '%c' is not an alnum character.\n", ch);
    }

    return 0;
}
