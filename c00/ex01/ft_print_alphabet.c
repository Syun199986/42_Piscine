#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z')
	{
		write (1, &alp, 1);
		alp++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet ();
// 	return (0);
// }