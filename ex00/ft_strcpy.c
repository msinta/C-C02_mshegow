/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/20 12:39:03 by mshegow       #+#    #+#                 */
/*   Updated: 2023/08/20 13:12:02 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	source[] = "Codam is Codam";
// 	char	destination[15];

// 	ft_strcpy(destination, source);
// 	printf("Source: %s\n", source);
// 	printf("Destination: %s\n", destination);

// 	return (0);

// }
