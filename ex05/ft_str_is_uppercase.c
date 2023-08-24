/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/20 14:09:09 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/21 16:51:11 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
// 	char	test3[4] = "ZZZA";
// 	char	test4[14] = "Good Morning!";
// 	char	test5[2] = "";

// 	printf("\"%s\" result: %d\n", test1, ft_str_is_uppercase(test1));
// 	printf("\"%s\" result: %d\n", test5, ft_str_is_uppercase(test5));
// 	printf("\"%s\" result: %d\n", test3, ft_str_is_uppercase(test3));
// 	printf("\"%s\" result: %d\n", test4, ft_str_is_uppercase(test4));

// 	return (0);
// }
