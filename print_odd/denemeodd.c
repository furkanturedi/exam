#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("\n");
        return (0);
    }

    char *str = argv[1];
    int i = 0;

    while (str[i])
    {
        if (i % 2 == 1) // Sadece tek sayılı indeksleri yazdır (1, 3, 5, ...)
            printf("%c", str[i]);
        i++;
    }
    printf("\n");
    return (0);
}