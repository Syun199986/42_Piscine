#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp_rev;

	alp_rev = 'z';
	while (alp_rev >= 'a')
	{
		write (1, &alp_rev, 1);
		alp_rev--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet ();
// 	return (0);
// }