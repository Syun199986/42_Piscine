#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char str1[30] = "ABC";
//     char str2[] = "123";
//     char *p = "abcd";
// 	int i;

// 	printf("\n自作\n\n");
//     strcat(str1, str2);
//     printf("%s\n", str1);
//     strcat(str1, p);
//     printf("%s\n", str1);
//     strcat(str1, "xyz");
//     printf("%s\n\n", str1);
// 	i = 0;
// 	while (i < 20)
// 		printf("%d ", str1[i++]);
// 	printf("\n\n");

//     char str3[30] = "ABC";
//     char str4[] = "123";
//     char *p1 = "abcd";

// 	printf("本家\n\n");
//     strcat(str3, str4);
//     printf("%s\n", str3);
//     strcat(str3, p1);
//     printf("%s\n", str3);
//     strcat(str3, "xyz");
//     printf("%s\n\n", str3);
// 	i = 0;
// 	while (i < 20)
// 		printf("%d ", str1[i++]);
// 	printf("\n\n");

//     return 0;
// }
