/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/20 14:02:58 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/21 16:50:52 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char	test1[11] = "HelloWorld";
// 	char	test2[6] = "12345";
// 	char	test3[7] = "abczzz";
// 	char	test4[14] = "Good Morning!";
// 	char	test5[1] = "";

// 	printf("\"%s\" result: %d\n", test1, ft_str_is_lowercase(test1));
// 	printf("\"%s\" result: %d\n", test2, ft_str_is_lowercase(test2));
// 	printf("\"%s\" result: %d\n", test3, ft_str_is_lowercase(test3));
// 	printf("\"%s\" result: %d\n", test4, ft_str_is_lowercase(test4));
// 	printf("\"%s\" result: %d\n", test5, ft_str_is_lowercase(test5));

// 	return (0);
// }
