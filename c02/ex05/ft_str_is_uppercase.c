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

int	alp_judge(int i, int str_len, char *str)
{
	while (str_len > 0)
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
		{
			i++;
			str_len--;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
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
		ret = alp_judge(i, str_len, str);
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
//     char    str5[] = "\0";

//     test1 = ft_str_is_uppercase(str1);
//     test2 = ft_str_is_uppercase(str2);
//     test3 = ft_str_is_uppercase(str3);
//     test4 = ft_str_is_uppercase(str4);
//     test5 = ft_str_is_uppercase(str5);
//     printf("%d\n", test1);
// 	printf("%d\n", test2);
//     printf("%d\n", test3);
//     printf("%d\n", test4);
//     printf("%d\n", test5);
//     return (0);
// }