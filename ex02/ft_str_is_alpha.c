/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/21 16:46:42 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/21 16:46:59 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z'))
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
//	char	test1[11] = "HelloWorld";
//	char	test2[6] = "12345";
//	char	test3[7] = "abcXYZ";
//	char	test4[14] = "Good Morning!";
//	char	test5[1] = "";

//	printf("\"%s\" result: %d\n", test1, ft_str_is_alpha(test1));
//	printf("\"%s\" result: %d\n", test2, ft_str_is_alpha(test2));
//	printf("\"%s\" result: %d\n", test3, ft_str_is_alpha(test3));
//	printf("\"%s\" result: %d\n", test4, ft_str_is_alpha(test4));
//	printf("\"%s\" result: %d\n", test5, ft_str_is_alpha(test5));

//	return (0);
// }
