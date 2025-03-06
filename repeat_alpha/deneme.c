#include <unistd.h>

int countrepeat(char c)
{
    int count;

    if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
    {
        if (c <= 'z' && c >= 'a' )
        {
            count = c - 'a' + 1;
            return(count);
        }
        else if (c <= 'Z' && c >= 'A')
        {
            count = c - 'A' + 1;
            return(count);
        }
        else
        return(1);
    }
    else
    {
        return(1);
    }
}


int main(int argc, char **argv)
{
    int count;
    int i = 0;

    if (argc != 2)
    {
        write(1,"\n",1);
    }
    else
    {
        while (argv[1][i])
        {
            count = countrepeat(argv[1][i]);
            while (count--)
            {
                write(1,&argv[1][i],1);
            }
            i++;
        }
    }
}