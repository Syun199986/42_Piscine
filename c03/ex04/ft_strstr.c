#include<stdio.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*find(char *s, char *f, char *to_find)
{
	char	*s_tmp;
	int		match_flag;

	match_flag = 0;
	while (*s != '\0')
	{
		if (*s == *f)
		{
			s_tmp = s;
			while ((*s_tmp == *f) && (*f != '\0'))
			{
				match_flag = 1;
				s_tmp++;
				f++;
			}
			if (*f == '\0')
				return (s);
		}
		if (match_flag == 1)
			f = to_find;
		match_flag = 0;
		s++;
	}
	return (NULL);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		str_len;
	int		to_find_len;
	char	*s;
	char	*f;
	char	*s_return;

	s = str;
	f = to_find;
	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	if (to_find_len > str_len)
		return (NULL);
	s_return = find(s, f, to_find);
	return (s_return);
}

// int main(void)
// {
// 	char	s1[] = "abc12abc12345";        /* 検索対象文字列 */
// 	char	s2[] = "abc123";                 /* 一致する場合 */
// 	char	s3[] = "xyz";                   /* 一致しない場合 */
// 	char	s4[] = "abcdefghijklmnopqr";    /* 検索対象文字列より長い場合 */
// 	char	s5[] = "";                      /* \0 */
// 	char	s6[] = "abc123";
// 	char	*sp;
// 	int i;

// 	i = 0;
// 	printf("\n本家\n\n");
// 	sp = strstr(s1,s2);
// 	printf("一致する場合 : %s\n",sp);
// 	// while (i < 30)
// 	// 	printf("%d ", s1[i++]);
// 	// printf("\n");
// 	sp = strstr(s1,s3);
// 	printf("一致しない場合 : %s\n",sp);
// 	sp = strstr(s1,s4);
// 	printf("検索対象文字列より長い場合 : %s\n",sp);
// 	sp = strstr(s1,s5);
// 	printf("\\0 : %s\n",sp);
// 	sp = strstr(s1,s6);
// 	printf("完全一致する場合 : %s\n",sp);

// 	i = 0;
// 	printf("\n自作\n\n");
// 	sp = ft_strstr(s1,s2);
// 	printf("一致する場合 : %s\n",sp);
// 	// while (i < 30)
// 	// 	printf("%d ", s1[i++]);
// 	// printf("\n");
// 	sp = ft_strstr(s1,s3);
// 	printf("一致しない場合 : %s\n",sp);
// 	sp = ft_strstr(s1,s4);
// 	printf("検索対象文字列より長い場合 : %s\n",sp);
// 	sp = ft_strstr(s1,s5);
// 	printf("\\0 : %s\n",sp);
// 	sp = strstr(s1,s6);
// 	printf("完全一致する場合 : %s\n\n",sp);

// 	return 0;
// }