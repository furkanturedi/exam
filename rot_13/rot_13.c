#include <unistd.h>

char rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c += 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c -= 13;
	}
	return(c);
}

int main(int argc, char **argv)
{
	char rot;
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rot = rot_13(argv[1][i]);
			write(1, &rot, 1);
			i++;
		}
	}
	else
		write(1,"\n",1);
}