#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char ltr;

    while (argc == 2)
    {
        while (argv[1][i])
        {
            ltr = argv[1][i];
            if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
            {
                ltr = ltr + 1;
            }
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
            {
                ltr = ltr + 1;
            }
            if (argv[1][i] == 'z' || argv[1][i] == 'Z')
            {
                ltr = ltr + 1;
            }
            write(1,&ltr,1);
            i++;
        }
    }
 write(1,"\n",1);



}