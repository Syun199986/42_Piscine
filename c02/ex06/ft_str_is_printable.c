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

int	visible_judge(int i, int str_len, char *str)
{
	while (str_len > 0)
	{
		if ((32 <= str[i]) && (str[i] <= 126))
		{
			i++;
			str_len--;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	str_len;
	int	ret;

	ret = 0;
	i = 0;
	str_len = ft_strlen(str);
	if (str[0] == '\0')
		return (1);
	else
	{
		ret = visible_judge(i, str_len, str);
		return (ret);
	}
}

// int main(void)
// {
//     int	test1;
// 	int	test2;
// 	int	test3;
// 	int	test4;
// 	int	test5;
// 	char	str1[] = "ABCDEF";
// 	char	str2[] = "123";
// 	char	str3[] = "abcdef";
//     char    str4[] = "a12B34c6";
//     char    str5[] = "	";

//     test1 = ft_str_is_printable(str1);
//     test2 = ft_str_is_printable(str2);
//     test3 = ft_str_is_printable(str3);
//     test4 = ft_str_is_printable(str4);
//     test5 = ft_str_is_printable(str5);
//     printf("%d\n", test1);
// 	printf("%d\n", test2);
//     printf("%d\n", test3);
//     printf("%d\n", test4);
//     printf("%d\n", test5);
//     return (0);
// }