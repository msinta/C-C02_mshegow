/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/20 14:42:42 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/21 12:46:47 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

// int	main(void)
// {
// 	char	test1[14] = "Hello World";
// 	char	test3[7] = "animal";
// 	char	test4[14] = "Good Morning!";
// 	char	test5[2] = "";
// 	char	test2[6] = "12345";

// 	ft_strupcase(test1);
// 	ft_strupcase(test5);
// 	ft_strupcase(test3);
// 	ft_strupcase(test4);
// 	ft_strupcase(test2);

// 	printf("result: \"%s\"  \n", test1);
// 	printf("result: \"%s\"  \n", test5);
// 	printf("result: \"%s\"  \n", test3);
// 	printf("result: \"%s\"  \n", test4);
// 	printf("result: \"%s\"  \n", test2);
// 	return (0);
// }
