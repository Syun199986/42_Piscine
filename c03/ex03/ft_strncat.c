#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	loop_cpy(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_len;
	int				i;

	i = 0;
	src_len = ft_strlen(src);
	if (src_len >= nb)
	{
		i = loop_cpy(dest, src, nb);
		dest[i] = '\0';
	}
	if (src_len < nb)
		i = loop_cpy(dest, src, src_len + 1);
	return (dest);
}

// int main(void)
// {
//     char str1[21] = "ABCDE";
//     char str2[] = "12345";
// 	char str3[] = "1234567890";
// 	int i;

// 	printf("\n本家\n\n");
//     strncat(str1, str2, 5);
//     printf("%s\n", str1); 
//     strncat(str1, str3, 10);
//     printf("%s\n", str1);
// 	i = 0;
// 	while (i < 21)
// 		printf("%d ", str1[i++]);
// 	printf("\n");

//     char str4[21] = "ABCDE";
//     char str5[] = "12345";
// 	char str6[] = "1234567890";

// 	printf("\n自作\n\n");
//     ft_strncat(str4, str5, 5);
//     printf("%s\n", str3); 
//     ft_strncat(str4, str6, 10);
//     printf("%s\n", str4);
// 	i = 0;
// 	while (i < 21)
// 		printf("%d ", str4[i++]);
// 	printf("\n\n");

//     return 0;
// }
