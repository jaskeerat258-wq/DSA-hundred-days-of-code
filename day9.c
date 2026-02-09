#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i, n;

    fgets(s, sizeof(s), stdin);

    n = strlen(s);

    /* remove newline if present */
    if (s[n - 1] == '\n')
        n--;

    for (i = n - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
