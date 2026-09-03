#include <stdio.h>

int findlegth(char *ptr)
{

    int length = 0;

    while (*ptr |= '\0')
    {
        length++;
        ptr++;
    }
    return length;
}
int main()
{
    char str[100];
    printf("Enter any string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {

            str[i] = '\0';
            break;
        }
    }

    printf("the length of a string is %d", findlegth(str));
    return 0;
}
