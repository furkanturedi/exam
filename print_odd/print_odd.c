#include <unistd.h>
void	print_odd(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main()
{
	char text[] = "0123456789";
	print_odd(text);
}