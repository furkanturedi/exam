#include <unistd.h>

int count_repeat(char c)
{
    int repeat;
    if (c >='a' && c <= 'z' || c >= 'A' && c<='Z')
    {
        if (c >='a' && c <= 'z')
        {
            repeat = c - 'a' + 1;
            return(repeat);
        }
        else if (c >='A' && c <= 'Z')
        {
            repeat = c - 'a' + 1;
            return(repeat);
        }
    }
    return(1);
}

int main(int argc, char **argv)
{
    int repeat;
    int i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    else
    {
            while (argv[1][i])
            {
                repeat = count_repeat(argv[1][i]);
                while (repeat--)
                write(1,&argv[1][i],1);
                i++;
            }
            write(1,"\n",1);
    }
}
