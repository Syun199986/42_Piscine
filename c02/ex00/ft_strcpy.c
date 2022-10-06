#include<stdio.h>

int	ft_strlen(char *str)
{
	int	str_count;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		str_count++;
	}
	return (str_count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	str_len;

	str_len = ft_strlen(src) + 1;
	i = 0;
	while (str_len > 0)
	{
		dest[i] = src[i];
		i++ ;
		str_len--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "ABCDEF";
// 	char	str2[] = "123";
// 	char	*p = "abcdef";

// 	printf("自作\n\n");
//     ft_strcpy(str1, str2);
// 	if (str1[3] == '\0')
// 	printf("str1[3] = N");
// 	printf("\n");
//     printf("%s\n", str1);
//     ft_strcpy(str1, p);
//     printf("%s\n", str1);
//     ft_strcpy(str1, "xyz");
//     printf("%s\n\n", str1);

// 	printf("本家\n\n");
//     strcpy(str1, str2);
// 	if (str1[3] == '\0')
// 	printf("str1[3] = N");
// 	printf("\n");
//     printf("%s\n", str1);
//     strcpy(str1, p);
//     printf("%s\n", str1);
//     strcpy(str1, "xyz");
//     printf("%s\n\n", str1);
// 	return (0);
// }