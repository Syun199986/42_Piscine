#include<stdio.h>
#include<unistd.h>
#include<string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char					*d;
	const char				*s;
	unsigned int			n;
	unsigned int			ret_size;

	d = dest;
	s = src;
	n = size - 1;
	ret_size = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (--n > 0)
		{
			*d++ = *s++;
			ret_size++;
		}
		*d = '\0';
	}
	return (ret_size);
}

// int	main(void)
// {
// 	char	str1[100] = "ABCDEFG";
// 	char	str2[] = "1234";
// 	unsigned int	size;
// 	unsigned int	test;
// 	int i;

// 	size = 4;
// 	printf("\n(自作)\n\n");
// 	test = ft_strlcpy(str1, str2, size);
// 	printf("size = %d\n", size);
// 	printf("test(返り値) = %d\n", test);
// 	printf("%s\n", str1);
// 	i = 0;
// 	while (i < 10)
// 		printf("%d ", str1[i++]);
// 	printf("\n");
// 	// printf("%s\n\n", str2);
// 	// if (str1[size - 1] == '\0')
// 	// 	printf("str1[%d] = N", size - 1);
// 	// printf("\n");
// 	// if (str1[size] == '\0')
// 	// 	printf("str1[%d] = N", size);
// 	// printf("\n");

// 	i = 3;
// 	// printf("str1[%d] = %c\n", i, str1[i]);

// 	char	str3[100] = "ABCDEFGHIJK";
// 	char	str4[] = "12345678";

// 	printf("\n(本家)\n\n");
// 	test = strlcpy(str3, str4, size);
// 	printf("size = %d\n", size);
// 	printf("test(返り値) = %d\n", test);
// 	printf("%s\n", str3);
// 	i = 0;
// 	while (i < 10)
// 		printf("%d ", str3[i++]);
// 	printf("\n");
// 	// printf("%s\n\n", str4);
// 	// if (str3[size - 1] == '\0')
// 	// 	printf("str1[%d] = N", size - 1);
// 	// printf("\n");
// 	// if (str3[size] == '\0')
// 	// 	printf("str1[%d] = N", size);
// 	// printf("\n");

// 	// printf("str1[%d] = %c\n\n", i, str3[i]);

// 	return (0);
// }
