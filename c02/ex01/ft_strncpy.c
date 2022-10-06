#include<stdio.h>
#include<unistd.h>
#include<string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	str_count;

	str_count = 0;
	while (str[str_count] != '\0')
	{
		str_count++;
	}
	return (str_count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (ft_strlen(src) >= n)
	{
		while (n > i)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (ft_strlen(src) >= i)
		{
			dest[i] = src[i];
			i++;
		}
		while (n > i)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "ABCDEFGHI";
// 	char	str2[] = "12345";
// 	char	str3[] = "ABCDEFGHI";
// 	char	str4[] = "12345";
// 	int 	i = 0;
// 	char	*t1;
// 	char	*t2;
// 	int 	n = 20;
// 	int	str_len = 8;

// 	printf("\n自作\n");
// 	t1 = ft_strncpy(str1, str2, str_len);
// 	printf("コピー後 : %s\n", t1);
// 	printf("ヌルチェック\n");
// 	while (i < n)
// 	{
// 		if(t1[i] != '\0')
// 			write(1, &t1[i], 1);
// 		if(t1[i] == '\0')
// 			write(1, "n", 1);
// 		i++;
// 	}
// 	printf("\n\n");
// 	//printf("%p\n", t1);

// 	i = 0;
// 	printf("本家\n");
// 	t2 = strncpy(str3, str4, str_len);
// 	printf("コピー後 : %s\n", t2);
// 	printf("ヌルチェック\n");
// 	while (i < n)
// 	{
// 		if(t2[i] != '\0')
// 			write(1, &t2[i], 1);
// 		if(t2[i] == '\0')
// 			write(1, "n", 1);
// 		i++;
// 	}
// 	printf("\n\n");
// 	//printf("%p\n", t2);
// 	return (0);
// }