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

void	alp_change(int i, int str_len, char *str)
{
	while (str_len > 0)
	{
		if (('a' <= str[0]) && (str[0] <= 'z'))
			str[0] -= 32;
		if (!(('0' <= str[i] && str[i] <= '9')
				|| ('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z'))
			&& ('a' <= str[i + 1] && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		if ((('0' <= str[i] && str[i] <= '9')
				|| ('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z'))
			&& ('A' <= str[i + 1] && str[i + 1] <= 'Z'))
			str[i + 1] += 32;
		i++;
		str_len--;
	}
}

char	*ft_strcapitalize(char *str)
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
// 	char	str1[] = "aBCDEF";
// 	char	str2[] = "123";
// 	char	str3[] = "xyz";
//  	char    str4[] = "a12B34C6";
//  	char str5[] = "salut, comment tu vas ? 42Mots quarante-deux; cin+et+un";

//     ft_strcapitalize(str1);
//     ft_strcapitalize(str2);
//     ft_strcapitalize(str3);
//     ft_strcapitalize(str4);
//     ft_strcapitalize(str5);
//     printf("%s\n", str1);
// 	printf("%s\n", str2);
//     printf("%s\n", str3);
//     printf("%s\n", str4);
//     printf("%s\n", str5);
//     return (0);
// }