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

int	alp_change(int i, int str_len, char *str)
{
	while (str_len > 0)
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
		{
			str[i] -= 32;
			i++;
			str_len--;
		}
		else
		{
			i++;
			str_len--;
		}
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;
	int	str_len;

	i = 0;
	str_len = ft_strlen(str);
	alp_change(i, str_len, str);
	return (str);
}

// int main(void)
// {
// 	char	str1[] = "ABCDEF";
// 	char	str2[] = "123";
// 	char	str3[] = "abcdef";
//     char    str4[] = "a12b34c6";
//     char    str5[] = "\0";

//     ft_strupcase(str1);
//     ft_strupcase(str2);
//     ft_strupcase(str3);
//     ft_strupcase(str4);
//     ft_strupcase(str5);
//     printf("%s\n", str1);
// 	printf("%s\n", str2);
//     printf("%s\n", str3);
//     printf("%s\n", str4);
//     printf("%s\n", str5);
//     return (0);
// }