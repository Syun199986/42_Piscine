#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n)
	{
		if (s1[i] || s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			if (s1[i] < s2[i])
				return (-1);
			if (s1[i] == s2[i])
				i++;
		}
		n--;
	}
	return (0);
}

// int	main(void)
// {
//     char str[] = "ABC";

// 	printf("自作\n\n");
//     printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
//     printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n\n", ft_strncmp(str, "A", 2));

// 	printf("本家\n\n");
//     printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
//     printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
//     printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
//     printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
//     printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
//     printf("ABC: B     = %d\n", strncmp(str, "B", 2));
//     printf("ABC: A     = %d\n\n", strncmp(str, "A", 2));
//     return 0;
//     return (0);
// }
